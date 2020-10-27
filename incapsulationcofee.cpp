#include <iostream>


class CoffeeGrinder
{
private:
   bool checkVoltage()
   {
      return true;
   }
public:
   void start() {
      if (checkVoltage())
      {
         std::cout << "Work";
      }
      else
         std::cout << "It doesn't work";
   }
};

int main()
{
   CoffeeGrinder first;
   first.start();
}