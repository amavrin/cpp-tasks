#include <iostream>
#include "Header.h"
#include <cassert>

int main()
{
	vector<vector<int>> v{
		{1, 4, 3, 4, 0, -4},
		{3, 0, 4, 3, 0, 0},
		{0, 0, 0, 0, 4, -1}
	};
	assert(count_equals(v, 4) == 4);

	cout << "correct" << endl;
}