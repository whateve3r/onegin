#include "reversecmp.h"

int ReverseCmp(const char* str1, const char* str2)
{
    assert(str1 != NULL);
    assert(str2 != NULL);

    size_t len1 = Strlen(str1);
    size_t len2 = Strlen(str2);

    const char* EndStr1 = str1 + len1;
    const char* EndStr2 = str2 + len2;

    while (EndStr1 != str1 && EndStr2 != str2)
    {
        if (isalpha(*EndStr1) == 0)
        {
            EndStr1--;
        }

        else if (isalpha(*EndStr2) == 0)
        {
            EndStr2--;
        }

        else
        {
            if (*EndStr1 != *EndStr2)
            {
                return (*EndStr1 - *EndStr2);
            }
            EndStr1--;
            EndStr2--;
        }
    }

    return *EndStr1 - *EndStr2;
}

size_t Strlen(const char* str)
{
    assert(str != NULL);

    const char* begin = str;

    while (*str != '\0')
    {
        str++;
    }

    return size_t(str - begin);
}
