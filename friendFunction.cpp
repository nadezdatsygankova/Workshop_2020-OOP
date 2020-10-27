#include<iostream>
#include<string>
class Apple;
class Human;

class Human {
public:
	void TakeApple(Apple& apple);
	
};
class Apple
{
public:
	Apple(int weight, std::string color);
	~Apple();
	int GetWeight();
private:
	int weight;
	std::string color;
	friend void Human::TakeApple(Apple& apple);
};


Apple::Apple(int weight, std::string color)
{
	this->weight = weight;
	this->color = color;
}

Apple::~Apple()
{
}

int Apple::GetWeight()
{
	return weight;
}




void Human::TakeApple(Apple& apple)
{

	std::cout << apple.color;
}





int main() {
	Apple apple(150, "red");
	Human first;
	first.TakeApple(apple);

}