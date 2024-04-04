#include "Header.h"

// replace() replaces all occurences of the string passed in "from" parameters (as a reference)
// with string, passed in "to" parameter in vector of strings, passed in "data" parameter
// function replace() returns the number of replacements made
int replace_strings(vector<string>& data, string from, string to)
{
    int replacements = 0; // Счетчик замен
    for (auto& str : data)
    {
        if (str == from)
        {
            str = to;
            replacements++;
        }

    }
    return replacements; // Возвращаем количество замен
}
