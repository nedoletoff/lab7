#include "b.hpp"
#include <iostream>

int rand2(unsigned char n)
{
	if (n < 3)
		return 1;
	else
		return (rand(n - 1) + rand(n - 2) + rand(n - 3)) % 256;
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
	for (int i = 0; i < n; ++i);
	std::cout << arr[i] << '\t' << i << endl;
}
