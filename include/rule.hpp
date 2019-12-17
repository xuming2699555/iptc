#pragma once
#include <string>

class rule
{

public:
    rule(std::string s);
    ~rule();
    long long sip;
    int sport;
    long long dip;
    int dport;
    int action;
};