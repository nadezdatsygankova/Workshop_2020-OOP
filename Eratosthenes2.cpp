/*
Ex 2 (The Sieve of Eratosthenes) A prime integer is any
integer that is evenly divisible only by itself and 1.
The Sieve of Eratosthenes is a method of finding prime
numbers. It operates as follows: a) Create an array with
all elements initialized to 1 (true). array elements with
prime subscripts will remain 1. All other array elements
will eventually be set to zero. You’ll ignore elements 0
and 1 in this exercise. b) Starting with array subscript 2,
every time an array element is found whose value is 1,
loop through the remainder of the array and set to zero every element
whose subscript is a multiple of the subscript for
the element with value 1. For array subscript 2,
all elements beyond 2 in the array that are multiples of 2 will be set to zero (subscripts 4, 6, 8, 10, etc.);
for array subscript 3, all elements beyond 3 in the array that are multiples of 3 will be set to zero (subscripts 6, 9, 12, 15, etc.); and so on. When this process is complete, the array elements that are still set to one indicate that the subscript is a prime number. These can then be printed. Write a program that uses an array of 1000 elements to determine and print the prime numbers
between 2 and 999. Ignore element 0 of the array.
Part B
*/

#include<iostream>
#include<array> 

void printArray(int  myarray[], int length) {

   for (int k = 0; k < length; k++)
   {
      std::cout << myarray[k] << " ";
   }
}

void eratosthenesB(int  myarray[], int length)
{

   for (int i = 2; i < length; i++)
   {
      if (myarray[i] != 0)
      {
         for (int y = i + 1; y < length; y++)
         {
            if (y % y == y % i) {
               myarray[y] = 0;
            }

         }
      }
   }

}

void printArrayPri(int  myarray[], int length) {

   for (int k = 2; k < length; k++)
   {
      if (myarray[k] == 1)
         std::cout << k << " ";
   }
}


int main() {
   int myarray[1000] = {};
   for (int i = 0; i < 1000; ++i)
   {
      myarray[i] = 1;
   }
   std::cout << "The array with all elements initialized to 1 (true): " << std::endl;
   printArray(myarray, 1000);
   std::cout << std::endl;
   eratosthenesB(myarray, 1000);
   std::cout << "The array after the Sieve of Eratosthenes: " << std::endl;
   printArray(myarray, 1000);
   std::cout << "Prime number:" << std::endl;
   printArrayPri(myarray, 1000);

}
