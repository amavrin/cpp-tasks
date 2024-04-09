#include <iostream>
#include "Header.h"
#include <cassert>

int main()
{
    int ordered[]{ 10, 6, 4, 2, -3 };
    assert(find_first_less(ordered, 5, 5) == 2);

    std::cout << "correct" << std::endl;
}