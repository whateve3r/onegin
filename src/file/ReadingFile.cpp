#include "ReadingFile.h"

char* ReadingFile(const char* fname)
{
    assert(fname != NULL);

    FILE *filestream = fopen(fname, "r");
                                                // size = fread; в винде пиздец будет
    size_t size = filesize(filestream);

    char* Text = (char*)calloc(size + 1, sizeof(char));
    fread(Text, sizeof(char), size, filestream);
    Text[size] = '\0';

    fclose(filestream);

    return Text;
}
