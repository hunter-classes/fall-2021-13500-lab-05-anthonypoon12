#include <iostream>
#include "funcs.h"

bool isDivisibleBy (int n, int d)
{
    if (d==0)
        return false;
    else if (n%d==0)
        return true;
    return false;
}
