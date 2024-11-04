#include "struct.h"

struct String StringsFromFile(const char* fname)
{
    assert(fname != NULL);

    struct String text
    {
    text.Text = ReadingFile(fname),

    text.size = SizeOfFile(fname),

    text.count = QuantityOfStrings(text.Text, text.size, '\n'),

    text.line = SetPointers(text.Text, text.size, text.count),
    };

    return text;
}

