#include "strcompare.h"

int StrCompare(const char* str1, const char* str2)
{
    assert(str1 != NULL && str2 != NULL);

    while (*str1 != '\0' && *str2 != '\0')
    {
        if (*str1 != *str2)
        {
            return *str1 - *str2;
        }
        str1++;
        str2++;
    }
    return *str1 - *str2;
}
