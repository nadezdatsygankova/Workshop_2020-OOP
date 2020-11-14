#include <iostream>
#include <algorithm>
#include <vector>
#include<string>
/*
bool Mypred(int a, int b)
{
   return a < b;
}
*/


class Person
{
public:
   Person(std::string name, double score)
   {
      this->Name = name;
      this->Score = score;
   }
   bool operator()(const Person& p) //functor 
   {
      return p.Score > 180;
   }

   std::string Name;
   double Score;

};

int main()
{
   /*std::vector<int> v = { 1,8,4,9,84,7,56 };

   //sort(v.begin(), v.end()); //start and end vectors 1 parameter

   sort(v.begin(), v.end(), [](int a, int b)
      {
         return a > b;
      }); //3 parameters, 3-th - predicat

   for (auto element : v) //print a vector 
   {
      std::cout << element << std::endl;

   }
   */
   /*
   const int SIZE = 7;
   int arr[SIZE] = { 5,7,9,8,5,0,8 };
   std::cout << "================" << std::endl;

   std::sort(arr, arr + SIZE, [](int a, int b)
      {
         return a > b;
      });
*/
   std::vector<Person> people
   {
      Person("Peter",181),
      Person("Ivan",81),
      Person("Aleks",71),
      Person("Max",10),
      Person("Anna",190),
      Person("Nadia",171),
      Person("Katy",200),
      Person("Ivan",256),
   };

   sort(people.begin(), people.end(), [](const Person &p1,const Person &p2)
      {
      
         bool result = p1.Name < p2.Name;
         return result;
      
      }
   );

   for (auto element : people) //print a arr
   {
      std::cout << element.Name <<"\t "<< element.Score<< std::endl;

   }

   sort(people.begin(), people.end(), [](const Person& p1, const Person& p2)
      {

         bool result = p1.Score < p2.Score; 
         return result;

      }
   );



   for (auto element : people) //print a arr
   {
      std::cout << element.Name << "\t " << element.Score << std::endl;

   }
   
}