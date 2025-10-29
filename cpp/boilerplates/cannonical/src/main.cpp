#include "project_name/public_api.h"
#include <iostream>

int main() {
    project_name::Greeter greeter;
    std::cout << greeter.greet("World") << std::endl;
    std::cout << "2 + 3 = " << project_name::add(2, 3) << std::endl;
    return 0;
}
