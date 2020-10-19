#include <iostream>
#include <vector>

template <typename T>
void print(const std::vector<T> & vec) {
   if (vec.empty()) return;
   for (auto i : vec) std::cout << i;
   std::cout << std::endl;
}

int main() {
   std::vector <int> k { 1,2,4,8 };
   print(k);
}