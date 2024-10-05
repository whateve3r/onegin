#include "bubblesort.h"

void BubbleSort(char* Array, int rows)
{
    for (int i = 0; i < rows - 1; i++)
    {
        for (int j = 0; j < rows - i - 1; j++)
        {
            if (StrCompare(&Array[j], &Array[j+1]) < 0)
            {
                char temporary = {};
                Array[j] = temporary;
                Array[j+1] = Array[j];
                temporary = Array[j+1];

            }
        }
    }
}
