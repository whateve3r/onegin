#include "bubblesort.h"

void BubbleSort(char Array[][100], int rows)
{
    for (int i = 0; i < rows - 1; i++)
    {
        for (int j = 0; j < rows - i - 1; j++)
        {
            if (StrCompare(Array[j], Array[j+1]) < 0)
            {
                char temporary[100];
                strcpy(temporary, Array[j]);
                strcpy(Array[j], Array[j + 1]);
                strcpy(Array[j + 1], temporary);
            }
        }
    }
}
