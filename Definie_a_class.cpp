#include<iostream>
template <typename T>
class b {
   T a;
public:
   void setValue(const T &new_a) { a = new_a; }
   T getValue() const { return a; }

};


int main() {
   int c = 4;
   b<int> New;

   New.setValue(c);
   std::cout << New.getValue();


}