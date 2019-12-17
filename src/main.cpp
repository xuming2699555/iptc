#include <iostream>
#include "rule.hpp"
#include "space.hpp"

int main()
{
    std::cout << "Hello Easy C++ project!" << std::endl;
    auto r = new rule("noting");
    auto s = new space(r);
}