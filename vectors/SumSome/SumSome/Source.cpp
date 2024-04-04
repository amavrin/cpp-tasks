#include "Header.h"

// sum_some() accumulates and return the sum of v's elements whose value are 
// LT (less than), GT (greater than) or EQ (equals to)
// the value, passed in the parameter 'x
// LT, GT or EQ passed in the 'op' parameter
int sum_some(vector<int> v, int op, int x)
{
	int summa = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (op == LT && v[i] < x) 
		{
			summa += v[i];
		}
		if (op == GT && v[i] > x)
		{
			summa += v[i];
		}
		if (op == EQ && v[i] == x)
		{
			summa += v[i];
		}
	}
	return summa;
}