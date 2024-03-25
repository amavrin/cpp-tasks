#include <iostream>
#include <cassert>
#include "task.h"

int main()
{
	int array[5]{ 1, -2, 11, 17, 8 };
	// -2 + 8 == 6
	assert(sum_evens(array, size_t(5)) == 6);

	std::cout << "correct" << std::endl;
}