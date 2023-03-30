//
// Created by Maria Reina GM on 3/31/2023.
//
#include <iostream>
using namespace std;

bool lovefunc(int f1, int f2) {
    bool x{};
    if((f1 % 2 == 0) && (f2 % 2 != 0))
    {
        x = true;
        return x;
    }
    else if ((f1 % 2 != 0) && (f2 % 2 == 0)){
        x = true;
        return x;
    }
    else{
        x = false;
        return x;
    }
}
