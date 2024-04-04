#include "Header.h"

// void ring_ptr() swap values of three integers a, b, c
// so that a's value becomes b, b's value becomes c, and c's value become a's
// using pointers
void ring_ptr(int* a, int* b, int* c)
{
	int temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}

// void ring_ref() swap values of three integers a, b, c
// so that a's value becomes b, b's value becomes c, and c's value become a's
// using references
void ring_ref(int& a, int& b, int& c)
{
	int temp = a;
	a = b;
	b = c;
	c = temp;
}