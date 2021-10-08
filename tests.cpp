/*
Author: Anthony Poon
Course: CSCI-135
Instructor: Tong Yi/Mike Zamansky
Assignment: Lab 5
Test cases for funcs.cpp
*/

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("isDivisibleBy normal cases")
{
    CHECK(isDivisibleBy(10,5)==true);
    CHECK(isDivisibleBy(1,5)==false);
    CHECK(isDivisibleBy(10,50)==false);
}
TEST_CASE("isDivisibleBy cases with 0")
{
    CHECK(isDivisibleBy(0,0) == false);
    CHECK(isDivisibleBy(10,0)==false);
    CHECK(isDivisibleBy(0,5)==true);
}
TEST_CASE("isDivisibleBy cases with negatives")
{
    CHECK(isDivisibleBy(-10, 2) == true);
    CHECK(isDivisibleBy(-10, -5) == true);
    CHECK(isDivisibleBy(10, -6) == false);

}
TEST_CASE("isPrime cases for 0, 1, and 2")
{
    CHECK(isPrime(0)==false);
    CHECK(isPrime(1)==false);
    CHECK(isPrime(2)==true);
}
TEST_CASE("isPrime normal cases")
{
    CHECK(isPrime(0) == false);
    CHECK(isPrime(3)==true);
    CHECK(isPrime(4)==false);
    CHECK(isPrime(5)==true);
    CHECK(isPrime(121)==false);
    CHECK(isPrime(97)==true);
}
TEST_CASE("nextPrime cases for 0, 1, and 2")
{
    CHECK(nextPrime(0)==2);
    CHECK(nextPrime(1)==2);
}
TEST_CASE("nextPrime cases for primes")
{
    CHECK(nextPrime(2)==3);
    CHECK(nextPrime(3)==5);
    CHECK(nextPrime(5)==7);
    CHECK(nextPrime(11)==13);
}
TEST_CASE("nextPrime normal cases")
{
    CHECK(nextPrime(21)==23);
    CHECK(nextPrime(26)==29);
    CHECK(nextPrime(4)==5);
}
TEST_CASE("nextPrime negative cases")
{
    CHECK(nextPrime(-1)==2);
    CHECK(nextPrime(-100)==2);
}
TEST_CASE("countPrime abonormal")
{
    CHECK(countPrimes(30,10) == 6);
    CHECK(countPrimes(0,0)==0);
    CHECK(countPrimes(1,1)==0);
    CHECK(countPrimes(2,2)==1);
}
TEST_CASE("countPrime normal cases")
{
    CHECK(countPrimes(-100,3)==2);
    CHECK(countPrimes(0,10)==4);
    CHECK(countPrimes(2,3)==2);
}
TEST_CASE("isTwinPrime negative cases")
{
    CHECK(isTwinPrime(-1)==false);
    CHECK(isTwinPrime(-10)==false);
}
TEST_CASE("isTwinPrime normal cases")
{
    CHECK(isTwinPrime(0)==false);
    CHECK(isTwinPrime(1)==false);
    CHECK(isTwinPrime(2)==false);
    CHECK(isTwinPrime(3)==true);
    CHECK(isTwinPrime(4)==false);
    CHECK(isTwinPrime(5)==true);
}
TEST_CASE("nextTwinPrime test cases")
{
    CHECK(nextTwinPrime(-100)==3);
    CHECK(nextTwinPrime(0)==3);
    CHECK(nextTwinPrime(2)==3);
    CHECK(nextTwinPrime(5)==7);
}
TEST_CASE("largestTwinPrime test cases")
{
    CHECK(largestTwinPrime(0,0) == -1);
    CHECK(largestTwinPrime(5,18)==17);
    CHECK(largestTwinPrime(1,31)==31);
    CHECK(largestTwinPrime(14,16)==-1);
    CHECK(largestTwinPrime(90,0) == 73);
}
