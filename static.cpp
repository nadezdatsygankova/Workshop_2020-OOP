#include<iostream>
#include<string>
class Apple;


class Apple
{

public:
	Apple(int weight, std::string color);
	~Apple();
	static int Count;
	int id = Count;
private:
	int weight;
	std::string color;
	
};

int Apple :: Count = 0;

Apple::Apple(int weight, std::string color)
{
	this->weight = weight;
	this->color = color;
	Count++;
}

Apple::~Apple()
{
}






int main() {
	Apple apple(150, "red");
	Apple apple1(100, "red");
	std::cout << Apple::Count << std:: endl;
	std::cout <<apple1.id;

}
