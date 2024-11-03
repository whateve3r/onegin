#include "bubblesort.h"

void BubbleSort(char** Array, size_t rows, int (*CmpFunc)(const char* str1, const char* str2))
{
    assert(Array != NULL && CmpFunc != NULL);

    for (size_t i = 0; i < rows - 1; i++)
    {
        for (size_t j = 0; j < rows - i - 1; j++)
        {
            if (CmpFunc(Array[j], Array[j+1]) < 0)
            {
                char* temporary = Array[j];
                Array[j] = Array[j+1];
                Array[j+1] = temporary;
            }
        }
    }
}
