

#include <iostream>

class Gun
{
public:
   virtual void Shoot()
   {
      std::cout << "BUM" << std::endl;
   }
};

class SubmachineGin : public Gun
{
public:
   void Shoot() override
   {
      std::cout << "BUM BUM BUM" << std::endl;
   }
};

class Bazzoka :public Gun
{
public:
   void Shoot() override
   {
      std::cout << "BABAM" << std::endl;
   }
};

class Human
{
public:
   void Use(Gun* gun)
   {
      gun->Shoot();
   }
};
int main()
{
   Gun g;
   g.Shoot();

   SubmachineGin sub;
   sub.Shoot();

   Bazzoka baz;
   baz.Shoot();

   Human first;
   first.Use(&baz);


}
