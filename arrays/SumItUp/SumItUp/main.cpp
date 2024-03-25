#include <iostream>
#include <cassert>
#include "task.h"

int main()
{
    int arr[]{ 1, 2, -3, 4, 5 };
    assert(sum(arr, size_t(5)) == 9);
    std::cout << "correct" << std::endl;
}