#include <stdio.h>
#define int long int

int sum(int);
int factorial(int);

int fibonacci(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The product of natural numbers till %d is %d", n, fibonacci(n));
    return 0;
}


int fibonacci(int n)
{
    if (n == 0 || n == 1) return 1;

    return (fibonacci(n-1) + fibonacci(n-2));
}

int sum(int a)
{
    if (a == 0) return 0;
    return a + sum(a-1);
}

int factorial(int n)
{
    if (n == 0) return 1;

    return n * factorial(n-1);
}