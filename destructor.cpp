#include <iostream>

class Myclass
{
private:
   int *data;
public:
   Myclass(int size)
   {
      data = new int[size];
   }
   ~Myclass()
   {
      delete[]data;
   }
};


void Foo(int size)
{
   std::cout << "Create a class" << std::endl;
   Myclass New(size);
   std::cout << "Delete a class" << std::endl;
}


int main()
{
   Foo(5);
}