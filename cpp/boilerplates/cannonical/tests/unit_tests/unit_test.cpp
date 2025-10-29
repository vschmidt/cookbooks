#include "project_name/public_api.h"
#include <cassert>
#include <iostream>

int main() {
    // Test for add function
    assert(project_name::add(2, 3) == 5);
    assert(project_name::add(-1, 1) == 0);
    assert(project_name::add(0, 0) == 0);

    // Test for Greeter class
    project_name::Greeter greeter;
    assert(greeter.greet("Test") == "Hello, Test!");
    assert(greeter.greet("") == "Hello, !");

    std::cout << "All tests passed!" << std::endl;
    return 0;
}
