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
        bool replacedInString = false; // Добавляем флаг для отслеживания замен в строке
        while ((pos = data[i].find(from, pos)) != string::npos) 
        {
            data[i].replace(pos, from.length(), to);
            pos += to.length(); // Перемещаемся на длину замененной строки, чтобы избежать бесконечного цикла
            replacedInString = true; // Устанавливаем флаг, что в строке была произведена замена
        }
        if (replacedInString) // Увеличиваем счетчик только если в строке была хотя бы одна замена
        {
            replacements++;
        }
    }
    return replacements;
}
