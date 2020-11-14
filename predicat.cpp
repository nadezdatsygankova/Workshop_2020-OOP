#include <iostream>
#include <algorithm>
#include <vector>
#include<string>

bool GreaterThanZero(int a)
{
   return a > 0;
}


bool LessThanZero(int a)
{
   return a < 0;
}

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

   int result = count_if(people.begin(), people.end(), people.front());


}