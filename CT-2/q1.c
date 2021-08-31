#include <stdio.h>

int main()
{
    int n; 
    printf("Enter the number: ");
    scanf("%d", &n);

    int mask = 1 << 3;
    if (n&mask)
    {
        n &= ~mask;
    }
    else
    {
        n |= mask;
    }

    // n ^= mask;

    printf("The number after changing bits is %d", n);
    return 0;
}

// x ^ y = xy` + x`y