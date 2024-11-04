#include "QuantityOfStrings.h"

size_t QuantityOfStrings(char * array, size_t size, int symbol)
{
    assert(array != NULL);

    size_t count = 0;

    for (size_t i = 0; i < size; i++)
    {
        if (symbol == '\n')
        {
            if (array[i] == '\n' || array[i] == '\0')
            {
                count++;
            }
        }

        else
        {
            if (array[i] == symbol)
            {
                count++;
            }
        }
    }

    return count;
}
