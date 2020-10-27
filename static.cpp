#include<iostream>
#include<string>
class Apple;


class Apple
{

public:
	Apple(int weight, std::string color);
	~Apple();
	static int Count;
	int getId();
private:
	int id;
	int weight;
	std::string color;
	
};

int Apple :: Count = 0;

Apple::Apple(int weight, std::string color)
{
	this->weight = weight;
	this->color = color;
	Count++;
	id = Count;
}

Apple::~Apple()
{
}

int Apple::getId()
{
	return id;
}






int main() {
	Apple apple(150, "red");
	Apple apple1(100, "red");
	//std::cout << Apple::Count << std:: endl;
	std::cout << apple.getId() << std::endl;
	std::cout <<apple1.getId() << std::endl;

}
