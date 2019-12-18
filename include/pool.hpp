#pragma once
#include <map>
#include "space.hpp"

class pool
{

public:
    pool();
    ~pool();
    bool push(space *s);
    space *findspace(rule *r);
    std::map<long long, space *> *getClashSpace();

private:
    unsigned int spaceCount;
    unsigned int pushCount;
    std::map<long long, space *> m;
    std::map<long long, space *> cmap;
};