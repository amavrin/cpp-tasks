#include <iostream>
#include "Header.h"
#include <cassert>

int main()
{
    // correct vector: only one element is non-zero
    vector<unsigned int> v0{ 0,0,0,4,0,0,0,0 };

    // expect to fill it as follows:
    vector<unsigned int> expected{ 0,0,0,4,3,2,1,0 };

    // incorrect vector: two elements are non-zero
    // expect fill_forward() to retuen `false`
    vector<unsigned int> v1{ 0,0,0,4,4,0,0,0 };

    bool res = fill_forward(v0);
    assert(v0 == expected);
    assert(res);

    res = fill_forward(v1);
    assert(!res);

    cout << "correct" << endl;
}