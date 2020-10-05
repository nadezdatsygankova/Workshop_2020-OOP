/* Author Nadezda Tsygankova
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
bool isPalindrome(std::vector<T> list)
{
   for (int i = 0; i < list.size() / 2; i++)
   {
      if (list.at(i) != list.at(list.size() - i - 1))
      {
         return false;
      }
   }
   return true;
}

template <typename T>
void printVector(std::vector <T> v)
{
   for (int i = 0; i < v.size(); i++) {
      std::cout << v.at(i) << " ";
   }
}

template <typename T>
void checkList(std::vector<T> list, std::string name)
{
   std::cout << "This vector - (";
   printVector(list);
   std::cout << ") of " + name + (isPalindrome(list) ? " is" : " is not") + " palindrome";
   std::cout << std::endl;
}

int main() {
   std::vector<int> nums = { 2, 8, 5, 8, 2 };
   std::vector<int> numsNotP = { 2, 4, 5, 8, 5 };
   std::vector<float> floats = { 2.3, 8.5, 5.0, 8.5, 2.3 };
   std::vector<char> chars = { 'a', 'b', 'c', 'b', 'a' };
   std::vector<std::string> strings = { "abc", "123", "abc" };
   std::vector<int> single = { 0 };

   checkList(nums, "int numbers");
   checkList(numsNotP, "int numbers");
   checkList(floats, "float numbers");
   checkList(chars, "chars");
   checkList(strings, "strings");
   checkList(single, "int numbers");
   return 0;
}
