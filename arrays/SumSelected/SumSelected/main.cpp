#include <iostream>
#include <cassert>
#include "task.h"

int main()
{
    int array[]{ 1, 2, 10, 20, -5, -100 };
    int selector[]{ 1, 3, 4 };
    // array[1] + array[3] + array[4] == 2 + 17 + (-5) == 17
    assert(sum_selected(array, selector, 3) == 17);

    std::cout << "correct" << std::endl;
}