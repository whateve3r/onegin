#include "PrintString.h"

void PrintString(char** array, size_t count)
{
    assert(array != NULL);

    for (size_t i = 0; i < count; i++)
    {
        printf("%s\n", array[i]);
    }
}
