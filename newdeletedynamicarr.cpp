#include<iostream>

int main()
{
   int* ptr = new int;
   *ptr = 59;

   std::cout << *ptr;

   delete ptr;

   std::cout << "============" << std::endl;
   int size =0;
   std::cin >> size;
   int* arr = new int[size];

   for (int i = 0; i < size; i++)
   {
      arr[i] = rand() % 10;
   }

   for (int i = 0; i <size; i++)
   {
      std::cout << arr[i] << " " << arr + i << std::endl;
   }

   delete[] arr;



}
