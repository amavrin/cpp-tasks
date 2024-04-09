#include <iostream>
#include <string>
#include "Header.h"

#include <cassert>

void print_array(uint arr[], size_t size)
{
    std::cout << "[";
    std::string sep = "";
    for (size_t i = 0; i < size; i++)
    {
        std::cout << sep << arr[i];
        sep = ", ";
    }
    std::cout << "]" << std::endl;
}



int main()
{
    const int ASIZE = 6;
    uint array[ASIZE]{ 10, 4, 2, 1, 0, 0 };

    // print_array(array, ASIZE); // prints [10, 4, 2, 1, 0, 0]
    assert(get_free_space(array, ASIZE) == 2);

    std::cout << "get_free_space is OK" << std::endl;

    expand(array, ASIZE, 2);
    // print_array(array, ASIZE); // prints [10, 4, 2, 2, 1, 0]
    uint a2[]{ 10, 4, 2, 2, 1, 0 };
    assert(equals(array, a2, ASIZE));

    std::cout << "expand is OK" << std::endl;

    insert(array, ASIZE, 7);
    // print_array(array, ASIZE); // prints [10, 7, 4, 2, 2, 1]
    uint a3[]{ 10, 7, 4, 2, 2, 1 };
    assert(equals(array, a3, ASIZE));

    std::cout << "insert is OK" << std::endl;

    bool res = insert(array, ASIZE, 100);
    assert(!res); // we have no room

    uint elem = pop_head(array, ASIZE);
    assert(elem == 10);
    // print_array(array, ASIZE); // prints [7, 4, 2, 2, 1, 0]
    uint a4[]{ 7, 4, 2, 2, 1, 0 };
    assert(equals(array, a4, ASIZE));

    std::cout << "pop_head is OK" << std::endl;

    std::cout << "success" << std::endl;
}