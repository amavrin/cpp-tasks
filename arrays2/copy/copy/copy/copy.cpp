#include <iostream>
#include "Header.h"
#include <cassert>

int main()
{
	const size_t src_size = 4;
	const size_t dst_size = 3;
	double src[src_size]{ 1.0, 2.0, 3.0, 4.0 };
	double dst[dst_size];

	size_t count = copy(src, src_size, dst, dst_size);
	assert(count == dst_size);
	assert(dst[0] == src[0] && dst[1] == src[1] && dst[2] == src[2]);

	std::cout << "correct" << std::endl;
}
