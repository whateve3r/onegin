#include "QuantityOfStrings.h"

size_t QuantityOfStrings(char * array, size_t size)
{
    assert(array != NULL);

    size_t count = 0;

    for (size_t i = 0; i < size; i++)
    {
        if (array[i] == '\n' || array[i] == '\0')
        {
            count++;
        }
    }

    return count;
}
