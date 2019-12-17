#include "space.hpp"
#include <iostream>

space::space(rule *r)
{
    fip = (((r->sip & 0xff) >> 32) << 32) | ((r->dip & 0xff) >> 32);
    fport = ((r->sport & 0xff) >> 8 << 8) | ((r->dport & 0xff) >> 8);
    vrule[0] = r;
    std::cout << "space construct: fip:" << fip << "  fport:" << fport << std::endl;
}

space::~space()
{
}