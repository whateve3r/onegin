#include "struct.h"

struct String StringsFromFile()
{
    struct String text;

    text.Text = ReadingFile("onegin.txt");

    text.size = SizeOfFile("onegin.txt");

    text.count = QuantityOfStrings(text.Text, text.size);

    text.line = SetPointers(text.Text, text.size, text.count);

    return text;
}

