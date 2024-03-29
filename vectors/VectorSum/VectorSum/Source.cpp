#include "Header.h"

#include <numeric>

// sum() accumulates values of v's members and returns the sum
int sum(vector<int> v)
{
	int summa = 0;
	for (int i = 0; i < v.size(); i++)
	{
		summa += v[i];
	}
	return summa;
}