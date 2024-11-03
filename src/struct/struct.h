#include "../text/QuantityOfStrings.h"
#include "../text/SetPointers.h"
#include "../file/ReadingFile.h"
#include "../file/SizeOfFile.h"

struct String
{
    char* Text;

    size_t size;
    size_t count;

    char** line;
};

#ifndef struct
#define struct
struct String StringsFromFile(const char* fname);
#endif


