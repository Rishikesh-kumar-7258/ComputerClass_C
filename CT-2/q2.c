#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int fact = 1;
    // finding factorial
    for (int i = 1; i <= a; i++) fact *= i;

    // finding power
    int pow = 1;
    for (int i = 1; i <= b; i++) pow *= a;


    int ans  = fact * pow;
    printf("The answer is %d", ans);
    return 0;
}