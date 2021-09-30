/*
Author: Anthony Poon
Course: CSCI-135
Instructor: Tong Yi/Mike Zamansky
Assignment: Lab 5
main file for funcs.cpp
*/

#include <iostream>


#include "funcs.h"

int main()
{
  isDivisibleBy(10,5)==true;
  isDivisibleBy(1,5)==false;
  isDivisibleBy(10,50)==false;
  isDivisibleBy(10,0)==false;
  isDivisibleBy(0,5)==true;
  isPrime(0)==false;
  isPrime(1)==false;
  isPrime(2)==true;
  isPrime(3)==true;
  isPrime(4)==false
  isPrime(5)==true;
  isPrime(121)==false;
  isPrime(97)==true;
  nextPrime(0)==2;
  nextPrime(1)==2;
  nextPrime(2)==3;
  nextPrime(3)==5;
  nextPrime(5)==7;
  nextPrime(11)==13;
  nextPrime(21)==23;
  nextPrime(26)==29;
  nextPrime(4)==5;
  nextPrime(-1)==2;
  nextPrime(-100)==2;
  countPrimes(0,0)==0;
  countPrimes(1,1)==0;
  countPrimes(2,2)==1;
  countPrimes(-100,3)==2;
  countPrimes(0,10)==4;
  countPrimes(2,3)==2;
  isTwinPrime(-1)==false;
  isTwinPrime(-10)==false;
  isTwinPrime(0)==false;
  isTwinPrime(1)==false;
  isTwinPrime(2)==false;
  isTwinPrime(3)==true;
  isTwinPrime(4)==false;
  isTwinPrime(5)==true;
  nextTwinPrime(-100)==3;
  nextTwinPrime(0)==3;
  nextTwinPrime(2)==3;
  nextTwinPrime(5)==7;
  largestTwinPrime(5,18)==17;
  largestTwinPrime(1,31)==31;
  largestTwinPrime(14,16)==-1;
  return 0;
}
