#include "all.h"

int main()
{
    struct String Text = StringsFromFile("onegin.txt");

    BubbleSort(Text.line, Text.count, ReverseCmp);
    PrintString(Text.line, Text.count);

    BubbleSort(Text.line, Text.count, StrCompare);             // пропуск пробелов, знаков препинания, написать readme
    PrintString(Text.line, Text.count);

    free(Text.line);
    free(Text.Text);
}

