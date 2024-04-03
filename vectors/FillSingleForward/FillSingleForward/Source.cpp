#include "Header.h"

// fill_forward() takes vector<unsigned int>
// it checks if all elements except the single one are zero
// if not function returns 'false'
//
// For correct vectors if fills all elements followinf the non-zero
// with decremened values: for example, if v is {0,3,0,0,0}
// it transforms the vector into {0,3,2,1,0}

bool fill_forward(vector<unsigned int>& v)
{
	bool found_non_zero = false; // Флаг, указывающий, была ли найдена ненулевая цифра
	size_t non_zero_index = 0; // Переменная для хранения индекса ненулевого элемента
	
	for (size_t i = 0; i < v.size(); i++)
	{
		if (v[i] != 0)
		{
			// Если уже была найдена ненулевая цифра, вектор некорректен
			if (found_non_zero)
			{
				return false;
			}
			// Сохраняем индекс ненулевого элемента
			non_zero_index = i;
			found_non_zero = true;
		}
	}

	if (!found_non_zero)
	{
		return true;
	}

	for (size_t i = non_zero_index + 1; i < v.size(); i++) 
	{
		v[i] = v[non_zero_index] - (i - non_zero_index);
	}

	return true;
}
