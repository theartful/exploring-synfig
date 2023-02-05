#include <cassert>
#include <iostream>

#include <ETL/_handle.h>
#include <ETL/handle>

class Object : public etl::rshared_object
{
public:
    Object() : etl::rshared_object() {}
    ~Object()
    {
        std::cout << "~Object (" << std::hex << this << std::dec << ")\n";
    }
};

class Child : public Object
{
};

int main()
{
    etl::handle<Child> obj{new Child()};
    etl::handle<Child> obj2{new Child()};

    {
        etl::rhandle<Object> obj_replaceable1{obj};
        etl::rhandle<Object> obj_replaceable2{obj};
        etl::rhandle<Object> obj_replaceable3{obj};
        etl::rhandle<Child> obj_replaceable4{obj};

        assert(obj2->front_ == nullptr);
        assert(obj2->back_ == nullptr);

        assert(obj->front_ != nullptr);
        assert(obj->back_ != nullptr);

        obj_replaceable1.replace(obj2);

        assert(obj.get() != obj2.get());
        assert(obj_replaceable1.get() == obj2.get());
        assert(obj_replaceable2.get() == obj2.get());
        assert(obj_replaceable3.get() == obj2.get());
        assert(obj_replaceable4.get() == obj2.get());

        assert(obj2->front_ != nullptr);
        assert(obj2->back_ != nullptr);

        assert(obj->front_ == nullptr);
        assert(obj->back_ == nullptr);
    }

    assert(obj2->front_ == nullptr);
    assert(obj2->back_ == nullptr);
}
