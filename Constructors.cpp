#include <iostream>
#include <string>

class Animals
{
   std::string t = "";
   std::string b = "";

public:
   Animals() {}
   Animals(const std::string &new_t, const std::string &new_b ): t(new_t), b(new_b){}
   ~Animals(){}
   void print() const {
      std::cout << t << b;
   }

};


int main() {
   Animals a ("cat", "fluffy");
   a.print();
}