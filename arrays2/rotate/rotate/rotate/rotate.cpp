#include <iostream>
#include "Header.h"
#include <cassert>

int main()
{
    char arr[]{ 'a', 'b', 'c', 'd' };
    rotate(arr, 4, FWD);
    assert(arr[0] == 'd' && arr[1] == 'a' && arr[2] == 'b', arr[3] == 'c');

    rotate(arr, 4, BACK);
    assert(arr[0] == 'a' && arr[1] == 'b' && arr[2] == 'c', arr[3] == 'd');

    std::cout << "correct" << std::endl;
}