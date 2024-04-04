#include "Header.h"


// count_equals() counts the number of v's elements whose value equals to x parameter and returns the count
int count_equals(vector<vector<int>> v, int x)
{
	int number = 0;
	for (const auto vec : v)
	{
		number += count(vec.begin(), vec.end(), x);
	}
	return number;
}