#include "b.hpp"
#include <iostream>

int rand2(unsigned char n)
{
	if (n < 3)
		return 1;
	else
		return (rand2(n - 1) + rand2(n - 2) + rand2(n - 3)) % 256;
}

int rand(unsigned char n)
{

	unsigned char arr[] = {1, 1, 1};
	unsigned char count = 2;
	while (count < n)
	{
		arr[count%3] = arr[0] + arr[1] + arr[2];
		count++;
	}
	return arr[n%3];
}

void test(int* arr, int num)
{
	unsigned char c = 0;
	for (int i = 0; i < 10000; ++i)
	{
		c = i % num;
		++arr[rand(c)];
	}
}

void print_arr(int* arr, int n)
{
	for (int i = 0; i < n; ++i)
	{

		std::cout << "num " << i << " - " << arr[i]; 
		if (i % 4 == 3)
			std::cout << '\n';
		else
			std::cout << "\t\t";
	}
	std::cout << '\n';
}
