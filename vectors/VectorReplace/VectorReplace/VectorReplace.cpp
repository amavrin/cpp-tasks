#include <iostream>
#include "Header.h"
#include <cassert>

int main()
{
	vector<string> data{ "deo", "deo", "krasnodeo", "batz!" };

	int count = replace_strings(data, "deo", "peo");

	// replaced 2 "deo" strings with "peo" strings
	assert(count == 2);
	cout << "number of replacements is correct" << endl;

	assert(data[0] == "peo");
	assert(data[1] == "peo");
	assert(data[2] == "krasnodeo");
	assert(data[3] == "batz!");
	cout << "strings replaced correctly" << endl;
}