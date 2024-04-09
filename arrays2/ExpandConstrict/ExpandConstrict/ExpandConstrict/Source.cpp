#include "Header.h"

size_t get_free_space(uint arr[], size_t size)
{
	return 0;
}

bool insert(uint arr[], size_t size, uint elem)
{
	return true;
}

bool expand(uint arr[], size_t size, size_t starting_pos)
{
	return true;
}

void constrict(uint arr[], size_t size)
{
}

uint pop_head(uint arr[], size_t size)
{
	return 0;
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