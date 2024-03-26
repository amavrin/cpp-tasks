#include <iostream>
#include "Header.h"
#include <cassert>

int main()
{
	vector<int> v{ 1,2,3,4,5 };
	int op = LT;
	// 1 + 2 + 3 == 6
	assert(sum_some(v, op, 4) == 6);

	cout << "correct" << endl;
}