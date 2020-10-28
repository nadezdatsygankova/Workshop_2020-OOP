#include <iostream>
#include <string>

class Human
{
private:
   std::string name;
   int age;
   int weight;
public:
   Human(std::string name)
   {
      this->name = name;
      this->age = 0;
      this->weight = 0;
   }

   Human(std::string name, int age) :Human(name)
   {
      this->age = age;
   }

   Human(std::string name, int age, int weight) :Human(name, age)
   {
      this->weight = weight;
   }
};


int main()
{
   Human h("Ivan");
}