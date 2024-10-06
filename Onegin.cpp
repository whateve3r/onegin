#include "strcompare.h"
#include "bubblesort.h"

int main()
{
    FILE *onegin = fopen("onegin.txt", "r");

    fseek(onegin, 0, SEEK_END);
    size_t size = (size_t)ftell(onegin);
    rewind(onegin);

    char* Text = (char*)calloc(size + 1, sizeof(char));
    fread(Text, sizeof(char), size, onegin);
    Text[size] = '\0';

    size_t count = 0;

    for (size_t k = 0; k < size; k++)
    {
        if (Text[k] == '\n' || Text[k] == '\0')
        {
            count++;
        }
    }

    char** line = (char**)calloc(count, sizeof(char*));
    line[0] = Text;
    size_t StrNum = 1;
    for (size_t j = 0; j < size; j++)
    {
        if (Text[j] == '\n')
        {
            Text[j] = '\0';

            if (StrNum < count)
            {
                line[StrNum++] = &Text[j+1];
            }
        }
    }

    fclose(onegin);

    BubbleSort(line, count);

    for (size_t i = 0; i < count; i++)
    {
        printf("%s\n", line[i]);
    }

    free(line);
    free(Text);
}

