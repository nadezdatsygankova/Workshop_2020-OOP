#include <iostream>
#include <string>

template <typename T>

T max(const T & a, const T & b)
{
   return a > b ? a : b;
}

int main() {
   int a = 5;
   int b = 7;

   std::string a2 = "Cat";
   std::string b2 = "Doc";

   std::cout << max<int>(a, b) << std::endl;;
   std::cout << max<std::string>(a2, b2);
}