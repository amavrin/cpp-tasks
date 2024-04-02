#include <iostream>
#include "Header.h"
#include <cassert>

int main()
{
    int a1[5]{ 1,2,3,2,1 };
    int a2[5]{ 3,3,3,3,3 };

    int* p1 = find_elem(a1, 5, 2);
    int* p2 = find_elem(a2, 5, 2);

    assert(p1 == &a1[1]);
    assert(p2 == nullptr);

    std::cout << "correct" << std::endl;
}