#include "Header.h"


// count_equals() counts the number of v's elements whose value equals to x parameter and returns the count
int count_equals(vector<vector<int>> v, int x)
{
	int number = 0;
	for (int i = 0; i < v.size(); i++)
	{
		number = (v.begin(), v.end(), x);
	}
	return number;
}