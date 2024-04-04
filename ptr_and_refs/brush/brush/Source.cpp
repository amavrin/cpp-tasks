#include "Header.h"

// brush() takes an array, the array size and some integer N.
// It makes every N-th element of the array equal to 0
// Replace "..." with function arguments and write a code

void brush(int* in, size_t len, int N)
{
	for (size_t i = 0; i < len; i++)
	{
		if ((i + 1) % N == 0) //делится ли индекс на N без остатка
		{
			in[i] = 0;
		}
	}	
}