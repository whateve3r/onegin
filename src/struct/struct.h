#include "../text/QuantityOfStrings.h"
#include "../text/SetPointers.h"
#include "../file/ReadingFile.h"
#include "../file/SizeOfFile.h"

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


