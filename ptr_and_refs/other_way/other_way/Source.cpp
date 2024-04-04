#include "Header.h"

// fill_other_way() takes a pointer to the last element in the array,
// the array size and the value, and fills all elements with the value

void fill_other_way(int* elem, int down_count, int value)
{
	for (int i = 0; i < down_count; i++)
	{
		*elem = value;
		elem--;
	}
}