#include <iostream>

//N! = N*(N-1)!

int factorial(int a)
{
   if (a == 0)
   {
      return 0;
   }
   if (a == 1)
   {
      return 1;
   }
   return (a * factorial(a - 1));
}


int main()
{
   std::cout << factorial(5);
}