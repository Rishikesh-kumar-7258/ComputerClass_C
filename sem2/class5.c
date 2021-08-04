#include <stdio.h>

int main()
{
    int i, n = 10, fact = 1;
    for (i = 0; i<n; i++)
    {
        // printf("Hello GGV\n");
        // printf("Hello GGV %d\n", i+1);
        fact *= (i+1);
    }
    printf("The factorial of %d is: %d",n, fact);
    return 0;
}