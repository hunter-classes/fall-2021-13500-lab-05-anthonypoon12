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
  std::cout<<std::boolalpha;
  std::cout<<"Testing isDivisibleBy:\n";
  std::cout<<"10 is divisible by 5: "<<isDivisibleBy(10,5)<<std::endl;
  std::cout<<"1 is divisible by 5: "<<isDivisibleBy(1,5)<<std::endl;
  std::cout<<"10 is divisible by 50: "<<isDivisibleBy(10,50)<<std::endl;
  std::cout<<"10 is divisible by 0: "<<isDivisibleBy(10,0)<<std::endl;
  std::cout<<"0 is divisible by 5: "<<isDivisibleBy(0,5)<<std::endl;
  std::cout<<"\n\n\n";
  std::cout<<"Testing isPrime:\n";
  std::cout<<"0 is a prime number: "<<isPrime(0)<<std::endl;
  std::cout<<"1 is a prime number: "<<isPrime(1)<<std::endl;
  std::cout<<"2 is a prime number: "<<isPrime(2)<<std::endl;
  std::cout<<"3 is a prime number: "<<isPrime(3)<<std::endl;
  std::cout<<"4 is a prime number: "<<isPrime(4)<<std::endl;
  std::cout<<"5 is a prime number: "<<isPrime(5)<<std::endl;
  std::cout<<"121 is a prime number: "<<isPrime(121)<<std::endl;
  std::cout<<"97 is a prime number: "<<isPrime(97)<<std::endl;
  std::cout<<"\n\n\n";
  std::cout<<"Testing nextPrime:\n";
  std::cout<<"The next prime number after 0 is: "<<nextPrime(0)<<std::endl;
  std::cout<<"The next prime number after 1 is: "<<nextPrime(1)<<std::endl;
  std::cout<<"The next prime number after 2 is: "<<nextPrime(2)<<std::endl;
  std::cout<<"The next prime number after 3 is: "<<nextPrime(3)<<std::endl;
  std::cout<<"The next prime number after 5 is: "<<nextPrime(5)<<std::endl;
  std::cout<<"The next prime number after 11 is: "<<nextPrime(11)<<std::endl;
  std::cout<<"The next prime number after 21 is: "<<nextPrime(21)<<std::endl;
  std::cout<<"The next prime number after 26 is: "<<nextPrime(26)<<std::endl;
  std::cout<<"The next prime number after 4 is: "<<nextPrime(4)<<std::endl;
  std::cout<<"The next prime number after -1 is: "<<nextPrime(-1)<<std::endl;
  std::cout<<"The next prime number after -100 is: "<<nextPrime(-100)<<std::endl;
  std::cout<<"\n\n\n";
  std::cout<<"Testing countPrime:\n";
  std::cout<<"The amount of prime numbers between 0 and 0 is: "<<countPrimes(0,0)<<std::endl;
  std::cout<<"The amount of prime numbers between 1 and 1 is: "<<countPrimes(1,1)<<std::endl;
  std::cout<<"The amount of prime numbers between 2 and 2 is: "<<countPrimes(2,2)<<std::endl;
  std::cout<<"The amount of prime numbers between -100 and 3 is: "<<countPrimes(-100,3)<<std::endl;
  std::cout<<"The amount of prime numbers between 0 and 10 is: "<<countPrimes(0,10)<<std::endl;
  std::cout<<"The amount of prime numbers between 2 and 3 is: "<<countPrimes(2,3)<<std::endl;
  std::cout<<"\n\n\n";
  std::cout<<"Testing isTwinPrime:\n";
  std::cout<<"-1 is a twin prime number: "<<isTwinPrime(-1)<<std::endl;
  std::cout<<"-10 is a twin prime number: "<<isTwinPrime(-10)<<std::endl;
  std::cout<<"0 is a twin prime number: "<<isTwinPrime(0)<<std::endl;
  std::cout<<"1 is a twin prime number: "<<isTwinPrime(1)<<std::endl;
  std::cout<<"2 is a twin prime number: "<<isTwinPrime(2)<<std::endl;
  std::cout<<"3 is a twin prime number: "<<isTwinPrime(3)<<std::endl;
  std::cout<<"4 is a twin prime number: "<<isTwinPrime(4)<<std::endl;
  std::cout<<"5 is a twin prime number: "<<isTwinPrime(5)<<std::endl;
  std::cout<<"\n\n\n";
  std::cout<<"Testing nextTwinPrime:\n";
  std::cout<<"The next twin prime after -100 is: "<<nextTwinPrime(-100)<<std::endl;
  std::cout<<"The next twin prime after 0 is: "<<nextTwinPrime(0)<<std::endl;
  std::cout<<"The next twin prime after 2 is: "<<nextTwinPrime(2)<<std::endl;
  std::cout<<"The next twin prime after 5 is: "<<nextTwinPrime(5)<<std::endl;
  std::cout<<"\n\n\n";
  std::cout<<"Testing largestTwinPrime(if answer is -1 it means N/A):\n";
  std::cout<<"The largest twin prime within the range 5 and 18 is: "<<largestTwinPrime(5,18)<<std::endl;
  std::cout<<"The largest twin prime within the range 1 and 31 is: "<<largestTwinPrime(1,31)<<std::endl;
  std::cout<<"The largest twin prime within the range 14 and 16 is: "<<largestTwinPrime(14,16)<<std::endl;
  return 0;
}