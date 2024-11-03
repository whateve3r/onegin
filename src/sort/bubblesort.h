#include "../mstrcmp/strcompare.h"
#include "../mstrcmp/reversecmp.h"
#include <assert.h>

#ifndef bubble
#define bubble
void BubbleSort(char** Array, size_t rows, int (*CmpFunc)(const char* str1, const char* str2));
#endif
