#include <iostream>

void FillArray(int* const p, int const size)
{
	for (size_t i = 0; i < size; i++)
	{
		p[i] = rand() % 10;
	}
}


void ShowArray(const int* p, int const size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << p[i] << " ";
	}
}


int main()
{
	int size = 5;
	int* p = new int[size];
	int* p1 = new int[size];

	FillArray(p, size);
	FillArray(p1, size);

	ShowArray(p, size);
	std::cout << std::endl;
	ShowArray(p1, size);

	delete[]p;

	p = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		p[i] = p1[i];
	}
	std::cout << "===========" << std::endl;
	ShowArray(p, size);
	std::cout << std::endl;
	ShowArray(p1, size);

	


	delete[]p1;
	delete[]p;




}