#include "filesize.h"

size_t filesize(FILE * filestream)
{
    fseek(filestream, 0, SEEK_END);
    size_t size = (size_t)ftell(filestream);
    rewind(filestream);

    return size;
}
