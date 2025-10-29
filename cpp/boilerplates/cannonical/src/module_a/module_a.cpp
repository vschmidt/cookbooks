#include "module_a_private.h"
#include "project_name/public_api.h"
#include <iostream>

namespace project_name {

std::string Greeter::greet(const std::string& name) {
    return "Hello, " + name + "!";
}

int add(int a, int b) {
    return a + b;
}

} // namespace project_name
