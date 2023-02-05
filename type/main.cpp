#include <algorithm>
#include <iostream>

#include <synfig/main.h>
#include <synfig/type.h>
#include <synfig/value.h>

void print_type(synfig::Type* type)
{
    std::cout << type->description.name << ":\n";
    std::cout << "    - id: " << type->identifier << '\n';
    std::cout << "      version: " << type->description.version << '\n';
    std::cout << "      name: \"" << type->description.name << "\"\n";
    std::cout << "      local_name: \"" << type->description.local_name << "\"\n";
    std::cout << "      aliases: [";
    for (size_t i = 0; i < type->description.aliases.size(); i++) {
        auto& alias = type->description.aliases[i];
        if (i == 0)
            std::cout << '"' << alias << '"';
        else
            std::cout << ", \"" << alias << '"';
    }
    std::cout << "]\n";
    synfig::ValueBase value(*type);
    synfig::String value_as_string = value.get_string();
    std::replace(value_as_string.begin(), value_as_string.end(), '\n', ' ');
    std::cout << "      default_value: \"" << value_as_string << "\"\n";

    std::cout << '\n';
}

int main()
{
    synfig::Main synfig_main("/usr/local/");
    synfig::Type* type = synfig::Type::get_first();

    while (type) {
        print_type(type);
        type = type->get_next();
    }
}
