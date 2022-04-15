#include <stdio.h>

int main()
{
    int a = 5;
    int *ptr = &a;

    int **ptr2;
    ptr2[0] = ptr;


    printf("%p\n", ptr2[0]);

    return 0;
}