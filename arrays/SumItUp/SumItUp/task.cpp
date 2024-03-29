#include "task.h"

// sum all elements of the vector of the given size
int sum(int array[], size_t array_size)
{
	int summa = 0;
	for (int i = 0; i < array_size; i++)
	{
		summa += array[i];
	}
	return summa;
}
