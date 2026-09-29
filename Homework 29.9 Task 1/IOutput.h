#pragma once
#include <iostream>
using namespace std;

class IOutput
{
public:
    virtual void Show() = 0;
    virtual void Show(string info) = 0;
};