#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two number: ");
    scanf("%d%d", &a, &b);

    // printf("The hcf of %d and %d", a, b);

    // while (a > 0)
    // {
    //     int temp = a;
    //     a = b%a;
    //     b = temp;

    // }

    // printf(" is %d", b);

    int power = (a != 0);
    int isNegative = (b < 0);
    printf("%d power %d is: ", a ,b);
    if (b < 0) b = -b;

    while (b > 0)
    {
        if (b&1) 
        {
            power *= a;
            b--; 
        }
        else 
        {
            a*=a;
            b /= 2;
        }
    }

    if (isNegative) printf("%f", 1.0/power);
    else printf("%d", power);
    
}