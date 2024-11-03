#include "reversecmp.h"

int ReverseCmp(const char* str1, const char* str2)
{
    assert(str1 != NULL && str2 != NULL);

    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);

    const char* EndStr1 = str1 + len1;
    const char* EndStr2 = str2 + len2;

    while (EndStr1 != str1 && EndStr2 != str2)
    {
        EndStr1--;
        EndStr2--;

        if (*EndStr1 != *EndStr2)
        {
            return *EndStr1 - *EndStr2;
        }
    }

    return *EndStr1 - *EndStr2;
}
