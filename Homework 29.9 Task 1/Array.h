#pragma once
#include "IOutput.h"

class Array : public IOutput
{
private:
    int* arr;
    int size;

public:
    Array(int* a, int s);
    ~Array();

    void Show() override;
    void Show(string info) override;
};