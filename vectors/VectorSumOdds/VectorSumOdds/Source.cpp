#include "Header.h"

// sum_odds() accumulates the sum of v's elements, whose values are odd (not divided by 2) and return the sum
int sum_odds(vector<int> v)
{
	int summa = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] % 2 != 0)
		{
			summa += v[i];
		}
	}
	return summa;
}