#include "gtest/gtest.h"
#include "module_a.hpp"

TEST(ModuleATest, AddFunction)
{
    Greet greeter = Greet();

    EXPECT_EQ(greeter.sayHello(), "Hello from module_a!");
}
