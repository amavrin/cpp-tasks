#include <iostream>
#include "Header.h"
#include <cassert>

int main()
{
	vector<int> v{ -1, 3, 4, 7 };
	// (-1) + 3 + 7 == 9
	assert(sum_odds(v) == 9);

	cout << "correct" << endl;
}