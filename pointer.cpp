#include <iostream>

void Foo(int* a)
{
   (*a)++;
}


void swap(int* a, int* b)
{
   int c;
   c = *a;
   *a = *b;
   *b = c;
}


template <typename T>
void swapk(T &a, T &b)
{
  T c;
   c = a;
   a = b;
   b = c;
}
void Two(int a)
{
   a++;
}

void Two1(int& a)
{
   a = 879;
}

void Two3(int* a)
{
   *a = -896;
}


int main()
{
   int a = 5;
   std::cout << a << std::endl;
   int* pa = &a;
   int* pa1 = &a;

   std::cout << *pa << "   " << *pa1 << std::endl;

   *pa1 = 8;
   std::cout << a << std::endl;
   a = 78;

   std::cout << *pa << std::endl;


   int arr[5]{ 2,5,8,6,8 };
   int* ptr = arr;

   std::cout << ptr << std::endl;
   std::cout << *ptr << std::endl;

   std::cout << "============="<<std::endl;
   for (int i = 0; i < 5; i++)
   {
      std::cout << ptr[i] << std::endl;
   }

   std::cout << "=============" << std::endl;
   int x = 5;
   int* px = &x;
   Foo(px);
   std::cout << x;

   std::cout << "=============" << std::endl;

   int b = 85;
   int c = 100;

   swap(&b, &c);
   std::cout << b << std::endl;
   std::cout << c << std::endl;

   std::cout << "=============" << std::endl;
   //ссылки

   int& bref = b;
   std::cout << bref << std::endl;

   int* psd = &bref;

   *psd = -4;
   std::cout << b << std::endl;

   int first = 87;
   Two(first);
   std::cout << first << std::endl;
   Two1(first);
   std::cout << first << std::endl;
   Two3(&first);

   std::cout << first << std::endl;

   std::cout << "=============" << std::endl;

   float f = 4.56;
   float f2 = 8.596;
   swapk(f, f2);

   std::cout << f << std::endl;
   std::cout << f2 << std::endl;
}