#pragma once
#include <string>

class rule
{

public:
    rule(std::string s);
    ~rule();
    u_int64_t sip;
    int sport;
    u_int64_t dip;
    int dport;
    char action;
};