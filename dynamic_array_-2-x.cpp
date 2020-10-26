#include<iostream>

int main()
{
   int row;
   int colon;
   std::cout << "Enter a rows: ";
   std::cin >> row;
   std::cout << "Enter a colon: ";
   std::cin >> colon;


   int **arr = new int*[row];


   for (int i = 0; i < row; i++)
   {
      arr[i] = new int[colon];
   }

   //full
   for (int i = 0; i < row; i++)
   {
      for (int j = 0; j < colon; j++)
      {
         arr[i][j] = rand() % 10;
      }
   }


   //print
   for (int i = 0; i < row; i++)
   {
      for (int j = 0; j < colon; j++)
      {
         std::cout << arr[i][j] << '\t';
      }
      std::cout << std::endl;
   }

   for (size_t i = 0; i < row; i++)
   {
      delete[] arr[i];
   }

   delete[] arr;






}