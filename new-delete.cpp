#include <iostream>
#include <new>


class NewP {
   int _a =0;
   int _b=0;
   int _c=0;
public:
   NewP() {};
   ~NewP() {};
   int a() { return _a; }
   int b() { return _b; }
   int c() { return _c; }
};

int main() {
   //version 1 
   try {
      NewP* o1 = new NewP;
      std::cout << o1->a() << o1->b() << o1->c();
      delete o1;
   }
   catch (std::bad_alloc& ba) {
      std::cout << ba.what();
      return 1;
   }


   //version 2
   NewP* o1 = new(std::nothrow) NewP;
   if (o1 == nullptr) {
      std::cout << "new c1 failed";
      return 1;
   }
   std::cout << o1->a() << o1->b() << o1->c();
   delete o1;

}