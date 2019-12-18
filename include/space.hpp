#pragma once
#include "rule.hpp"
#include <vector>

class space
{

public:
    space(rule *r);
    ~space();
    std::vector<rule *> vrule;
    u_int64_t fip;
    int fport;
};