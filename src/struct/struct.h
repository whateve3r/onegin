#include "ReadingFile.h"
#include "SizeOfFile.h"
#include "QuantityOfStrings.h"
#include "SetPointers.h"

struct String
{
    char* Text;
    char** line;

    size_t size;
    size_t count;
};

#ifndef struct
#define struct
struct String StringsFromFile();
#endif


