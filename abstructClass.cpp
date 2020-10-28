#include <iostream>
/*
* Абстрактные классы
* Чисто виртуальные функции
* virtual
* override
*/

class Weapon
{
public:
   virtual void Shoot() = 0;

};

class Gun : public Weapon
{
public:
   void Shoot() override
   {
      std::cout << "BANG!" << std::endl;
   }
};

class SubmachineGun :public Gun
{
public:
   void Shoot() override
   {
      std::cout << "BANG! BANG! BANG!" << std::endl;
   }
};

class Bazooka :public Weapon
{
public:
   void Shoot() override
   {
      std::cout << "BADABUB!!!" << std::endl;
   }
};

class Knife :public Weapon
{
public:
   void Shoot() override
   {
      std::cout << "VJUH!!!" << std::endl;
   }

};

class Player
{
public:
   void Shoot(Weapon* weapon)
   {
      weapon->Shoot();
   }
};

int main()
{
   setlocale(LC_ALL, "ru");

   Gun gun;

   SubmachineGun machinegun;

   Bazooka bazooka;

   Knife knife;

   Player player;
   player.Shoot(&gun);

   return 0;
}

