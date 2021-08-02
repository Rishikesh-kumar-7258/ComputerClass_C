#include <stdio.h>

int main()
{
    // int n ;
    // printf("PLease enter you number");
    // scanf("%d", &n);

    // if (n&1)
    // {
    //     printf("The number is odd");
    // }
    // else
    // {
    //     printf("The number is even");
    // }
    // printf("\n");

    int a, b, c;
    printf("Enter your numbers here: ");
    scanf("%d %d %d", &a, &b, &c);

    int greatest;
    if (a > b)
    {
        if (a > c) greatest = a;
        else greatest = c;
    }
    else
    {
        if (b > c) greatest = b;
        else greatest = c;
    }

    printf("%d is the greatest number", greatest);

    return 0;

}