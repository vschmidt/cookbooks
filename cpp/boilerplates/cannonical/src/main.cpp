#include <fmt/base.h>

#include "module_a/module_a.hpp"

int main()
{
    Greet greeter = Greet();

    fmt::print("{}", greeter.sayHello());
    return 0;
}
