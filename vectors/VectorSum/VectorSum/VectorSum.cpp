#include <iostream>
#include "Header.h"
#include <cassert>

int main()
{
	vector<int> v{ 1,2,3 };
	assert(sum(v) == 6);
	cout << "correct" << endl;
}