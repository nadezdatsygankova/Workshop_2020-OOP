#include <iostream>
#include <string>


class Animal {
   std::string name;
   std::string type;
   std::string sound;
   Animal() {};
protected:
   Animal(const std::string& _name, const std::string& _type, const std::string& _sound): name(_name),type(_type),sound(_sound){}
public:
   void speak() const;

   const std::string& name_() const { return name; }
   const std::string& type_() const { return type; }
   const std::string& sound_() const { return sound; }
};

void Animal::speak() const {
   std::cout << name << type << sound;
}


class Dog : public Animal
{
   int walked;
public:
   Dog(std::string n) : Animal(n,"dog","woof"), walked(0) {};
   int walk() { return walked; }
};

int main() {
   Dog Pit("Pit");
   Pit.walk();
   Pit.speak();
}