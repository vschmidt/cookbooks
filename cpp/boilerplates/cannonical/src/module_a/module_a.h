#ifndef MODULE_A_H
#define MODULE_A_H

#include <string>

namespace module_a
{

    class Greet
    {
    public:
        Greet();
        std::string sayHello() const;
    };

} // namespace module_a

#endif // MODULE_A_H
