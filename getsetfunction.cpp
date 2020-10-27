#include <iostream>
#include <string>

class Pointer {
private:
   int x;
   int y;

public:
   int getX() { return x; }
   void setX(int newx) { x = newx; };
   int getY() { return y; }
   void setY(int newy) { y = newy; };
   void print() {
      std::cout << "X = " << x << " Y = " << y;
   }
};

int main() {
   Pointer first;
   first.setX(58);
   first.setY(8);
   first.print();
}