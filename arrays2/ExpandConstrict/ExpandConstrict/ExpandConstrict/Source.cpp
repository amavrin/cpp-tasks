#include "Header.h"

size_t get_free_space(uint arr[], size_t size)
{
	size_t free_space = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == 0)
		{
			free_space++;
		}
		
	}
	return free_space;
}

bool insert(uint arr[], size_t size, uint elem)
{
	size_t free_space = get_free_space(arr, size);
	if (free_space == 0)
	{
		return false; // No free space
	}

	size_t insert_pos = 0;
	while (insert_pos < size && arr[insert_pos] > elem)
	{
		insert_pos++;
	}

	if (!expand(arr, size, insert_pos))
	{
		return false; // Expand failed
	}

	arr[insert_pos] = elem;

	return true;
}

bool expand(uint arr[], size_t size, size_t starting_pos)
{
	size_t free_space = get_free_space(arr, size);
	if (free_space == 0)
	{
		return false; 
	}

	if (starting_pos < 0 || starting_pos >= size)
	{
		return false; // Invalid starting position
	}

	for (size_t i = size - 1; i > starting_pos; i--)
	{
		arr[i] = arr[i - 1];
	}

	return true;
}

void constrict(uint arr[], size_t size)
{
	for (size_t i = 0; i < size - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[size - 1] = 0; 
}

uint pop_head(uint arr[], size_t size)
{
	if (size == 0)
	{
		return 0; // Handle empty array
	}
	uint popped_element = arr[0];
	constrict(arr, size);
	return popped_element;
}

// this is auxiliary test function comparing two arrays
bool equals(uint a1[], uint a2[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		if (a1[i] != a2[i]) return false;
	}
	return true;
}