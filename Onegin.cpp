#include "strcompare.h"
#include "bubblesort.h"

int main()
{
    FILE *onegin = fopen("onegin.txt", "r");

    int count = 0;

    char Text[100][100];

    while (fgets(Text[count], sizeof(Text[count]), onegin))
    {
        count++;
    }

    fclose(onegin);

    BubbleSort(Text, count);

    for (int i = 0; i < count; i++)
    {
        printf("%s", Text[i]);
    }
}
