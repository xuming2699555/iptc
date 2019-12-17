#pragma once
#include "rule.hpp"
#include <vector>

class space
{

public:
    space(rule *r);
    ~space();
    std::vector<rule *> vrule;
    long long fip;
    int fport;
};