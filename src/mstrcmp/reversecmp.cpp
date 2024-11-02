#include "reversecmp.h"

int ReverseCmp(char* str1, char* str2)
{
    char* EndStr1 = strchr(str1, '\0');
    char* EndStr2 = strchr(str2, '\0');

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
