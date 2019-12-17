#include "rule.hpp"
#include <iostream>

rule::rule(std::string s)
{
    sip = ((192 & 0xff) << 56) | ((168 & 0xff) << 48) | ((1 & 0xff) << 40) | ((1 & 0xff) << 32) | ((192 & 0xff) << 24) | ((168 & 0xff) << 16) | ((1 & 0xff) << 8) | ((100 & 0xff) << 0);
    sport = ((1 & 0xff) << 8) | ((1024 & 0xff) << 0);
    dip = -1;
    dport = -1;
    action = 0;
    std::cout << "rule : from" << sip << " : " << sport << " to " << dip << ":" << dport << "do" << action << std::endl;
}

rule::~rule()
{
}