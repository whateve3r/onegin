#include "strcompare.h"

int StrCompare(const char* str1, const char* str2)
{
    assert(str1 != NULL);
    assert(str2 != NULL);

    while (*str1 != '\0' && *str2 != '\0')
    {
        if (isalpha(*str1) == 0)
        {
            str1++;
        }

        else if (isalpha(*str2) == 0)
        {
            str2++;
        }

        else
        {
            if (*str1 != *str2)
            {
                return *str1 - *str2;
            }
            str1++;
            str2++;
        }
    }
    return *str1 - *str2;
}
