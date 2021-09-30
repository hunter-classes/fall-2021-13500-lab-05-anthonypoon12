/*
Author: Anthony Poon
Course: CSCI-135
Instructor: Tong Yi/Mike Zamansky
Assignment: Lab 5
Task A. Is divisible?
Write a program numbers.cpp that defines a function
bool isDivisibleBy(int n, int d);
If n is divisible by d, the function should return true, otherwise return false.
Task B. Is a prime?
A prime number is an integer greater or equal to 2 that is only divisible by 1 and by itself. 
The first few primes are: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 …
N is a prime if and only if it is not divisible evenly by any of the numbers from 2 to N−1. 
Let’s implement this decision as a function.
In the same program numbers.cpp, add a function
bool isPrime(int n);
The function should return true if n is a prime, otherwise return false. Change the main function to test your new code.
Task C. Next prime
Add a function
int nextPrime(int n);
that returns the smallest prime greater than n.
Task D. Count primes in range
Add a function
int countPrimes(int a, int b);
that returns the number of prime numbers in the interval a ≤ x ≤ b. Change the main function to test the new code.
Task E. Is a twin prime?
A prime number N is called a twin prime if either N-2 or N+2 (or both of them) is also a prime.
For example, a prime 17 is a twin prime, because 17+2 = 19 is a prime as well.
The first few twin primes are: 3, 5, 7, 11, 13, 17, 19, 29, 31 …
Add a function
bool isTwinPrime(int n);
that determines whether or not its argument is a twin prime. Change the main function to test the new code.
Task F. Next twin prime
Add a function
int nextTwinPrime(int n);
that returns the smallest twin prime greater than n. Change the main function to test the new code.
Task G. Largest twin prime in range
Add a function
int largestTwinPrime(int a, int b);
that returns the largest twin prime in the range a ≤ N ≤ b.
If there is no twin primes in range, then return -1.
*/
#include <iostream>
#include "funcs.h"

bool isDivisibleBy (int n, int d)
{
    if ((d==0)||((d>n)&&(n!=0)))
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
    for (int i = 2;i<n;i++)
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
int countPrimes(int a, int b)
{
    int output=0;
    for (int i = a; i<=b;i++)
    {
        if (isPrime(i))
            output++;
    }
    return output;
}
bool isTwinPrime(int n)
{
    if (isPrime(n))
    {
        if (isPrime(n+2))
            return true;
        if (isPrime(n-2))
            return true;
    }
    return false;
}
int nextTwinPrime(int n)
{
    int x = nextPrime(n);
    if (!isTwinPrime(x))
        x = nextPrime(x);
    return x;
}
int largestTwinPrime(int a, int b)
{
    for (int i = b; i >= a; i--)
        if (isTwinPrime(i))
            return i;
    return -1;
}