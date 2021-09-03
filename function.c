#include <stdio.h>
#define int long long

int factorial(int n)
{
    if (n == 0) return 1;

    return n * factorial(n-1);
}

signed main()
{
    printf("%ld", factorial(5));
    return 0;
}