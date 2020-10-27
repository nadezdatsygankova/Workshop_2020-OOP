#include<iostream>
#include<string>
class Apple;


class Apple
{

public:
	Apple(int weight, std::string color);
	~Apple();
	
	int getId();
	static int getCount();
private:
	int id;
	int weight;
	std::string color;
	static int Count;
	
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

 int Apple::getCount()
{
	return Count;
}




int main() {
	Apple apple(150, "red");
	Apple apple1(100, "red");
	//std::cout << Apple::Count << std:: endl;
	std::cout << apple.getId() << std::endl;
	std::cout <<apple1.getId() << std::endl;
	// count print
	std::cout << Apple::getCount() << std::endl;

}
