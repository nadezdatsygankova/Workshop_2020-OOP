#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

template <typename T>
bool isPalindrome(std::vector<T> list)
{
    std::vector<T> copy = list;
    std::reverse(copy.begin(), copy.end());
    return list == copy ? true : false;
}

template <typename T>
void checkList(std::vector<T> list, std::string name)
{
    std::cout << "This vector of " + name + (isPalindrome(list) ? " is" : " is not") + " palindrome"; 
    std::cout << std::endl;
}

int main()
{
    std::vector<int> nums = {2, 8, 5, 8, 3};
    std::vector<float> floats = {2.3, 8.5, 5.0, 8.5, 2.3};
    std::vector<char> chars = {'a', 'b', 'c', 'b', 'a'};
    std::vector<std::string> strings = {"abc", "123", "abc"};

    checkList(nums, "int numbers");
    checkList(floats, "float numbers");
    checkList(chars, "chars");
    checkList(strings, "strings");
}
