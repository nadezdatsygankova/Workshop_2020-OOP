#include <iostream>
#include <string>


class Cap
{
public:
	std::string getColor() { return color; };
private:
	std::string color = "red";
};
class Human
{
public:
	void think() {
		newBrain.think();
	}
	void lookCap()
	{
		std::cout << "My cap is "<< newCap.getColor();
	}

private:
	class Brain {
	public:
		void think()
		{
			std::cout << " I am thinking ";
		}
	};
	Brain newBrain;
	Cap newCap;

};


int main()
{
	Human Man;
	Man.think();
	std::cout << std::endl;
	Man.lookCap();
}
