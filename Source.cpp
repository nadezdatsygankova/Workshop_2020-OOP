/*

Ex.1

(Palindromes) Write a function template palindrome that takes a vector parameter and returns true or false according to whether the vector 
does or does not read the same forward as backward (e.g., a vector containing 1, 2, 3, 2, 1 is a palindrome,
but a vector containing 1, 2, 3, 4 is not).



*/


#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

template <typename T>
bool palindromes(std::vector<T> v)
{
   std::vector<T> v2;
   v2 = v;
   std::reverse(v2.begin(), v2.end());
  
   if (v2 == v)
   {
      return true;
   }
   else
      return false;

}
int main() {

   
   std::vector <int> number{1,2,3,2,1};
   std::vector <int> number2{ 1,2,3,4 };
   std::vector <float> floatNumber{ 2.3,8.5,5.0,8.5,2.3 };
   std::vector <char> charL{ 'a','b','c','b','a' };
   
   //for int
   if (palindromes(number) == 1) {
      std::cout << "These vector of int numbers is a palindrome." << std::endl;
   }
   else 
      std::cout << "These vector of int numbers is not a palindrome."<<std::endl;
   if (palindromes(number2) == 1) {
      std::cout << "These vector of int numbers is a palindrome." << std::endl;
   }
   else
      std::cout << "These vector of int numbers is not a palindrome." << std::endl;


   //for float
   if (palindromes(floatNumber) == 1) {
      std::cout << "These vector of float numbers is a palindrome."<< std::endl;
   }
   else
      std::cout << "These vector of float numbers is not a palindrome."<< std::endl;
   //for char
   if (palindromes(charL) == 1) {
      std::cout << "These vector of char is a palindrome."<< std::endl;
   }
   else
      std::cout << "These vector of char is not a palindrome."<< std::endl;


   return 0;
}



