#include <iostream>
#include "Header.h"
#include <cassert>

int main()
{
    int array[2][2][2]{
        {{1,2}, {3,4}},
        {{5,6}, {7,8}}
    };

    // 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 == 36
    assert(sum3(array) == 36);
    std::cout << "correct" << std::endl;
}
