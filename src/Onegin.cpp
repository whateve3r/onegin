#include "all.h"

int main()
{
    struct String Text = StringsFromFile();

    BubbleSort(Text.line, Text.count);

    PrintString(Text.line, Text.count);

    free(Text.line);
    free(Text.Text);
}

