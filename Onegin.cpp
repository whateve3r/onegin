#include "strcompare.h"
#include "bubblesort.h"

int main()
{
    FILE *onegin = fopen("onegin.txt", "r");

    int count = 0;

    fseek(onegin, 0, SEEK_END);
    size_t size = (size_t)ftell(onegin);
    rewind(onegin);

    char* Text = (char*)calloc(size, sizeof(char));

    fgets(Text, size, onegin);

    for (size_t k = 0; k < size; k++)
    {
        if (Text[k] == '\n' || Text[k] == '\0')
        {
            count++;
        }
    }

    fclose(onegin);

    BubbleSort(Text, count);

    for (int i = 0; i < count; i++)
    {
        printf("%s", &Text[i]);
    }

    free(Text);
}

