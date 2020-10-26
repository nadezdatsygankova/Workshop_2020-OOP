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
	FillArray(p, size);
	ShowArray(p, size);
}