#include "task.h"

// sum_evens() sums all array elements which are even, i.e. divided by 2, and returns the sum
int sum_evens(int array[], size_t array_size) 
{
	int summa = 0;

	for (int i = 0; i < array_size; i++)
	{
		if (array[i] % 2 == 0)
		{
			summa += array[i];
		}
	}
	return summa;
}