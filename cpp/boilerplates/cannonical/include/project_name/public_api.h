#ifndef PROJECT_NAME_PUBLIC_API_H
#define PROJECT_NAME_PUBLIC_API_H

#include <string>

namespace project_name {

class Greeter {
public:
    std::string greet(const std::string& name);
};

int add(int a, int b);

} // namespace project_name

#endif // PROJECT_NAME_PUBLIC_API_H
