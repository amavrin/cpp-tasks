#include <iostream>
#include "Header.h"
#include <cassert>

int main()
{
    const size_t CNT = 3;
    int array[CNT]{ 0 };

    fill_other_way(&array[CNT - 1], CNT, 1);

    for (int i = 0; i < CNT; i++)
    {
        assert(array[i] == 1);
    }

    std::cout << "correct" << std::endl;
}