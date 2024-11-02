#include "SetPointers.h"

char** SetPointers(char* Text, size_t size, size_t count)
{
    char** line = (char**)calloc(count, sizeof(char*));

    line[0] = Text;
    size_t StrNum = 1;
    for (size_t i = 0; i < size; i++)
    {
        if (Text[i] == '\n')
        {
            Text[i] = '\0';

            if (StrNum < count)
            {
                line[StrNum++] = &Text[i+1];
            }
        }
    }

    return line;

}
