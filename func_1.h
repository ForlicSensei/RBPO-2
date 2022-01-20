#pragma once
#include <cmath>
#include <iostream>

extern double x;
extern double result;

namespace Sofronov{
    static void f() {
        result = -sqrt(x);
    }
}

