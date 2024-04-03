#include "Header.h"

// replace() replaces all occurences of the string passed in "from" parameters (as a reference)
// with string, passed in "to" parameter in vector of strings, passed in "data" parameter
// function replace() returns the number of replacements made
int replace_strings(vector<string>& data, string from, string to)
{
    int replacements = 0;

    for (int i = 0; i < data.size(); i++) 
    {
        size_t pos = 0;
        bool replacedInString = false; // ��������� ���� ��� ������������ ����� � ������
        while ((pos = data[i].find(from, pos)) != string::npos) 
        {
            data[i].replace(pos, from.length(), to);
            pos += to.length(); // ������������ �� ����� ���������� ������, ����� �������� ������������ �����
            replacedInString = true; // ������������� ����, ��� � ������ ���� ����������� ������
        }
        if (replacedInString) // ����������� ������� ������ ���� � ������ ���� ���� �� ���� ������
        {
            replacements++;
        }
    }
    return replacements;
}
