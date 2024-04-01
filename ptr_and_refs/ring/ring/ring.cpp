#include <iostream>
#include "Header.h"
#include <cassert>



int main()
{
	int a = 1, b = 2, c = 3;

	// ring_ptr(...);

	assert(a == 2);
	assert(b == 3);
	assert(c == 1);

	// ring_ref(...);

	assert(a == 3);
	assert(b == 1);
	assert(c == 2);
	std::cout << "correct" << std::endl;
}