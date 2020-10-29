#include <iostream>
#include <list>
#include<vector>

template <typename T>
void PrintList(std::list<T>& myList)
{
   auto it = myList.begin();
   for  (it ; it != myList.end() ; it++)
   {
      std::cout << *it << std::endl;
   }
}

int main()
{
   std::list <int> myList;
   myList.push_back(5);
   myList.push_front(8);
   myList.sort();
   myList.pop_back();
   myList.push_back(55);
   myList.pop_front();
   myList.push_back(85);
   myList.push_back(78);


   std::cout << myList.size() << std::endl;
   myList.reverse();

   auto it = myList.begin();
   myList.insert(it, 8555);

   advance(it, 2);
   myList.insert(it, 78);

   myList.erase(it);
   myList.remove(55);
   PrintList(myList);


}
