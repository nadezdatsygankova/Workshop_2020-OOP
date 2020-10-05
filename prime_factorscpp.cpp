/*
Ex 5 (Prime Factors) Modify Exercise 4 so that,
if the number the user inputs into the program is not prime,
the program displays the prime factors of the number and the number of times
each prime factor appears in the unique prime factorization. For example,
the output for the number 54 should be
The unique prime factorization of 54 is: 2 * 3 * 3 * 3

*/



#include<iostream>
#include<vector>

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


void printNumber(int n) {

   int i = 2;
   while (i <= n) {
      if (n % i == 0)
      {
         std::cout << i;
         n = n / i;
         if (n > 1)
            std::cout << "*";
      }
      else
         i = i + 1;
   }
}

int main()
{
   std::cout << "Enter a number: ";
   int n;
   std::cin >> n;
   if (primeNumber(n) == 0)
   {
      std::cout << "The unique prime factorization of " << n << " is : ";
      printNumber(n);
   }
   else
      std::cout << "This number is prime." << std::endl;

   return 0;
}

