#include <vector>
#include<iostream>
#include<iostream>

template<typename T>
void printV(const std::vector <T> &a)
{
   if (a.empty()) return;
   for (auto &i : a)
   {
      std::cout << i<< " ";
   }
}


int main() {
   std::vector <int> b = { 1,2,3,8,9 };
   printV(b);
   std::cout << std::endl;
   std::cout << b.size() << std::endl;
   std::cout << b.front()<<std::endl;
   std::cout << b.back() << std::endl;

    b.push_back(15);
    printV(b);

    b.insert(b.begin() + 2, 78); //add
    b.erase(b.begin() + 1);//erase

    b.pop_back();//delete last


    printV(b);
    b.clear(); //delete all things
    printV(b);

}



