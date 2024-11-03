#include "SizeOfFile.h"

size_t SizeOfFile(const char* fname)
{
    assert(fname != NULL);

    FILE *filestream = fopen(fname, "r");

    size_t size = filesize(filestream);

    return size;
}
