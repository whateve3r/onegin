#include "ReadingFile.h"

char* ReadingFile(const char* fname)
{
    FILE *filestream = fopen(fname, "r");

    size_t size = filesize(filestream);

    char* Text = (char*)calloc(size + 1, sizeof(char));
    fread(Text, sizeof(char), size, filestream);
    Text[size] = '\0';

    fclose(filestream);

    return Text;
}
