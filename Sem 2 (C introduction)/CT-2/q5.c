#include <stdio.h>

int main()
{
    for (int i = 0; i < 26; i++)
    {
        char c = 'A' + i;
        if (c == 'D' || c == 'J' || c == 'M' || c == 'T' || c == 'Y') continue;
        
        printf("%c", c);
    }

    return 0;
}