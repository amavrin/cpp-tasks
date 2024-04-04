#include "Header.h"

// sum3() takes 3-dimentional array with all dimentions equals to 3
// and returns the sum of all elements
int sum3(int array[2][2][2])
{
	int summa = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 2; k++)
			{
				summa += array[i][j][k];
			}
		}
	}
	return summa;
}