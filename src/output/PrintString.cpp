#include "PrintString.h"

void PrintString(char** array, size_t count)
{
    for (size_t i = 0; i < count; i++)
    {
        printf("%s\n", array[i]);
    }
}