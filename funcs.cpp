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
bool isPrime(int n)
{
    if (n<2)
        return false;
    if (n==2)
        return true;
    for (int i = 2;i<n;n++)
        if (isDivisibleBy(n,i))
            return false;
    return true;
}
int nextPrime(int n)
{
    int x = n+1;
    while (!isPrime(x))
        x++;
    return x;
}