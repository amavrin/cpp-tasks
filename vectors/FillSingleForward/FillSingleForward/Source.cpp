#include "Header.h"

// fill_forward() takes vector<unsigned int>
// it checks if all elements except the single one are zero
// if not function returns 'false'
//
// For correct vectors if fills all elements followinf the non-zero
// with decremened values: for example, if v is {0,3,0,0,0}
// it transforms the vector into {0,3,2,1,0}

bool fill_forward(vector<unsigned int>& v)
{
    bool found_non_zero = false; // Flag indicating whether a non-zero digit has been found
    size_t non_zero_index = 0; // Variable for storing the index of a non-zero element

    for (size_t i = 0; i < v.size(); i++)
    {
        if (v[i] != 0)
        {
            // If a non-zero digit has already been found, the vector is incorrect
            if (found_non_zero)
            {
                return false;
            }
            // Saving the index of a non-zero element
            non_zero_index = i;
            found_non_zero = true;
        }
    }

    if (!found_non_zero)
    {
        return true;
    }

    for (size_t i = non_zero_index + 1; i < v.size(); i++)
    {
        if (v[i] != 0) // Check if there is another non-zero element after the first one
        {
            return false; // If so, the vector is incorrect
        }
        v[i] = v[non_zero_index] - (i - non_zero_index);
    }

    return true;
}
