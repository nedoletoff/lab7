#include "b.hpp"
#include <iostream>
#define N 256
using namespace std;


int main()
{
	int arr[N] = {0};
	test(arr, N);
	for (int i = 0; i < N; ++i)
		cout << arr[i] << "\t"  << i << endl;
}
