

/*
Ex 4 (Sieve of Eratosthenes) Modify Exercise 3, the Sieve of Eratosthenes,
so that, if the number the user inputs into the program is not prime, the program displays the prime factors of the number. Remember that a prime number’s factors are only 1 and the prime number itself.
Every nonprime number has a unique prime factorization.
For example, the factors of 54 are 2, 3, 3 and 3. When these values are multiplied together, the result is 54.
For the number 54, the prime factors output should be 2 and 3.
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

std::vector<int> arrayofN(int n) {
   std::vector<int> newVector;
   for (int i = 0; i <= n; i++) {
      newVector.push_back(i);
   }

   return newVector;
}

std::vector<int> printNumber(std::vector<int> newVec, int n) {
   std::vector<int> newV;
   for (int i = 2; i < n; i++) {
      if (n % newVec[i] == 0)
      {
         newV.push_back(newVec[i]);
         n = n / i;
      }
   }

   return newV;
}

void printVector(std::vector<int> num)
{
   for (int i = 0; i < num.size(); i++)
   {
      std::cout << num[i] << " ";
   }
}
int main()
{
   std::cout << "Enter a number: ";
   int n;
   std::vector<int> newVector;
   std::vector<int> vectorOnlyPrime;
   std::cin >> n;
   if (primeNumber(n) == 0)
   {
      newVector = arrayofN(n);
      vectorOnlyPrime = printNumber(newVector, n);
      std::cout << "The prime factors of the " << n << ": ";
      printVector(vectorOnlyPrime);
   }

   else
      std::cout << "This number is prime." << std::endl;

   return 0;
}
