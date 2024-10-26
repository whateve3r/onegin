#include "all.h"

int main()
{
    char* Text = ReadingFile("onegin.txt");

    size_t size = SizeOfFile("onegin.txt");
                                                        // TODO struct: char* size_t char**; 1 function
    size_t count = QuantityOfStrings(Text, size);

    char** line = SetPointers(Text, size, count);

    BubbleSort(line, count);

    PrintString(line, count);

    free(line);
    free(Text);
}

