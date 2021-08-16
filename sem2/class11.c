#include <stdio.h>

int main()
{
    int i = 1, fact = 1,n;
    printf("Enter the number: ");
    scanf("%d", &n);
    do
    {
        fact *= i;
        i++;
    }while (i <= n);

    printf("The factorial of %d is %d", n, fact);
    // do
    // {
    //     printf("%d ", i++);
    // }while (i <= 10);

    return 0;
}