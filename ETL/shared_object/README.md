`etl::(r)shared_object`s
========================

The `shared_object` and `rshared_object` classes are similar to the standard
provided `std::shared_pointer` in spirit, with the difference being that the
control block is embedded in the object itself. So instead of defining a `shared_object`
from another object, we actually have to inherit from `shared_object`.
```C++
class Object : public etl::shared_object {};

int main() {
    etl::handle<Object> obj { new Object() };
}
```
Internally `shared_object` contains a reference counter together with a couple
of functions `ref`/`unref` to increment or decrement it.

```C++
class shared_object {
private:
	mutable std::atomic<int> refcount;
public:
	void ref() const;
    void unref() const;
};
```

To manage a `shared_object` pointer, we wrap it in a `handle`, and the handle will
be responsible for automatically incrementing and decremnting the reference counter.
Whenever the reference counter reaches zero, the object is deleted as expected.

The `rshared_object` adds the capability of replacing all objects that are handled
by a `rhandle` class with another `rshared_object` of the same type. This is done
by adding another reference counter that counts the number of `rhandles`, and
embedding an intrusive linked list of `rhandle`s into the object by providing a
`front`/`back` data members that represent the first and last rhandles into the
`rshared_object`, and a `next` and `previous` members into the rhandles to enable
traversing that list.

```C++
class rshared_object : public shared_object {
private:
    mutable std::atomic<int> rrefcount;
public:
	void *front_; // void* here is rhandle<rshared_object>
	void *back_;  // void* here is rhandle<rshared_object>
};

template <typename T>
class rhandle : public handle<T> {
private:
	rhandle<value_type> *prev_;
	rhandle<value_type> *next_;
};
```
