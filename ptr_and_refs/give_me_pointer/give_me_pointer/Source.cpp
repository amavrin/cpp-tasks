#include "Header.h"


// find_elem() returns a pointer to the first array element equals to value.
// if no such element is found in first count elements, return nullptr
int* find_elem(int array[], size_t count, int value)
{
    for (size_t i = 0; i < count; ++i)
    {
        if (array[i] == value)
        {
            return &array[i];
        }
    }
    return nullptr;
}