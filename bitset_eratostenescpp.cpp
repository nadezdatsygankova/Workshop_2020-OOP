/*
Ex 3 (Sieve of Eratosthenes with bitset) This exercises revisits the Sieve of Eratosthenes
for finding prime numbers that we discussed in Exercise 2. Use a bitset to
implement the algorithm. Your program should display all the prime numbers from 2
to 1023, then allow the user to enter a number to determine whether
that number is prime.

*/


#include <bitset>
#include<iostream>

void printBitSet(std::bitset<1023> number) {

   for (int k = 0; k < 1023; k++)
   {
      std::cout << number[k] << " ";
   }
}

void eratosthenes(std::bitset<1023> number)
{

   for (int i = 2; i * i < 1023; i++)
   {
      if (number.test(i))
      {
         for (int y = 2 * i; y < 1023; y += i)
         {
            if (y % y == y % i)
            {
               //number[i] = 0;
               number.reset(y);
            }
         }
      }
   }
}

void printArrayPri(std::bitset<1023> number) {

   for (int k = 2; k < 1023; k++)
   {
      if (number.test(k))
         std::cout << k << " ";
   }
}

bool primeNumber(int n)
{
   bool flag = true;
   if (n == 0 || n == 1)
   {
      flag = false;
   }
   else {
      for (int i = 2; i <= n / 2; i++)
      {
         if (n % i == 0)
         {
            flag = false;
            break;
         }
      }
      return flag;
   }
}
int main()
{
   std::bitset<1023> number;
   number.set();
   //printBitSet(number);
   std::cout << std::endl;
   eratosthenes(number);
   //printBitSet(number);
   printArrayPri(number);
   std::cout << std::endl;
   std::cout << std::endl;
   std::cout << std::endl;
   std::cout << "Enter a number: ";
   int n;
   std::cin >> n;
   if (primeNumber(n))
   {
      std::cout << n << " is a prime number";
   }
   else
   {
      std::cout << n << " is not a prime number";
   }
   return 0;
}