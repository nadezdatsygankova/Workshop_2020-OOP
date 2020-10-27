#include<iostream>
#include <string>
class Image
{
public:
	void showInformation()
	{
		for (int i = 0; i < length; i++)
		{
			std::cout << pixels[i].getInformation() << std::endl;
		}
	}

private:
	static const int length = 5;
	class Pixel
	{
	public:
		Pixel(int r, int g, int b)
		{
			this->r = r;
			this->g = g;
			this->b = b;
		};
		std::string getInformation()
		{
			return "Pixel:" + std::to_string(r) + "Pixel:" + std::to_string(g) + "Pixel:" + std::to_string(b);
		}
	private:
		int r;
		int g;
		int b;
		
	};

	Pixel pixels [length] 
	{
		Pixel(0,4,8),
		Pixel(0, 4, 8),
		Pixel(8, 8, 8),
		Pixel(10, 8, 7),
		Pixel(0, 8, 8),
	};
};

