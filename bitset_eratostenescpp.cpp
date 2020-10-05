/*
Ex 3 (Sieve of Eratosthenes with bitset) This exercises revisits the Sieve of Eratosthenes
for finding prime numbers that we discussed in Exercise 2. Use a bitset to
implement the algorithm. Your program should display all the prime numbers from 2
to 1023, then allow the user to enter a number to determine whether
that number is prime.

*/


#include <bitset>
#include<iostream>


std::bitset<1023> eratosthenes(int n )
{
   std::bitset<1023> number;
   number.set();
   for (int i = 2; i  < 1023; i++)
   {
      if (number[i] != 0)
      {
         for (int y = 2 * i; y < 1023; y += i)
         {
            number[y] = 0;
         }
      }
   }
   return number;
}


void findPrime(std::bitset<1023> number, int findN)
{
 
      if (number[findN] == 1)
      {
         std::cout << "This number " <<findN<< " is prime" << std::endl;
      }
      else 
         std::cout << "This number " << findN << " is not prime" << std::endl;
   
}

void printArrayPri(std::bitset<1023> number) {

   for (int k = 2; k < 1023; k++)
   {
      if (number.test(k))
         std::cout << k << " ";
   }
}

int main()
{
   std::bitset<1023> number;
   
   int n;
   std::cout << "Enter a number beetween 2 and 1023 : ";
   std::cin >> n;
   number=eratosthenes(n);
   printArrayPri(number);
   std::cout << std::endl;
   findPrime(number, n);

   return 0;
}