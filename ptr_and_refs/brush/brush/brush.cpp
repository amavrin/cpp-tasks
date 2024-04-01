#include <iostream>
#include "Header.h"
#include <cassert>

int main()
{
    int in[]{ 1,2,3,4,5,6,7,8,9 };
    int out[]{ 1,2,0,4,5,0,7,8,0 };
    size_t len = sizeof(in) / sizeof(int);

    // brush(in, ...);

    for (size_t i = 0; i < len; i++) {
        assert(in[i] == out[i]);
    }
    
    std::cout << "correct" << std::endl;
}