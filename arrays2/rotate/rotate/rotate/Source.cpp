#include "Header.h"

// rotate() rotates the array of chars forward or backward.
// If rotating forward, all elements are shifted to the end, and last element becomes the first
// If rotating backward, all elements are shifted to the head, and the first element becomes last
void rotate(char arr[], size_t size, direction dir)
{

	if (dir == FWD)
	{
		char temp = arr[size - 1];
		for (int i = size - 1; i > 0; i--) // size - 1 (index of the last element in the array), loop will be executed for all elements of the array except the first one
		{
			arr[i] = arr[i - 1]; // Moving the elements one position forward
		}
		arr[0] = temp;
	}
	if (dir == BACK)
	{
		char temp = arr[0];
		for (int i = 0; i < size - 1; i++)
		{
			arr[i] = arr[i + 1]; // Moving the elements one position back
		}
		arr[size - 1] = temp;
	}

}