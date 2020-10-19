#include<iostream>


template <typename T>
T pi = T(3.140000L);

template<typename T>
T area_of_circle(const T& r)
{
   return r * r * pi<T>;
}

int main() {
   std::cout << pi<double> << std::endl;
   std::cout << area_of_circle<double>(3);
}

