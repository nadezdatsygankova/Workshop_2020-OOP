#include<iostream>
#include <string>

class Pixel
{
public:
	Pixel()
	{
		r = g = b = 0;
	};
	Pixel(int r, int g, int b)
	{
		this->r = r;
		this->g = g;
		this->b = b;
	};
	std::string getInformation()
	{
		return "Pixel: r " + std::to_string(r) + " g " + std::to_string(g) + " b " + std::to_string(b);
	}
private:
	int r;
	int g;
	int b;

};



int main()
{
	const int lenght = 5;
	Pixel arr[lenght];
	std::cout << arr[0].getInformation();

	Pixel* arrdynamic = new Pixel[lenght];
	arrdynamic[0] = Pixel(45, 85, 89);
	std::cout << arrdynamic[0].getInformation();

}