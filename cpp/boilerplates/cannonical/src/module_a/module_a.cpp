#include "module_a/module_a.h"

namespace module_a {

Greet::Greet() {
    // Constructor implementation
}

std::string Greet::sayHello() const {
    return "Hello from module_a!";
}

} // namespace module_a
