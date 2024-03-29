#include "task.h"

// sum selected members of 'array'
// indexes of the 'array' member are set by selector's members 
int sum_selected(int array[], int selector[], size_t selector_count)
{
	int summa = 0;
	for (size_t i = 0; i < selector_count; i++)
	{
		summa += array[selector[i]]; //selector[i] используется в качестве индекса для доступа к элементам массива array.
	}
	return summa;
}