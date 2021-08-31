#include <stdio.h>
#include <math.h>
int main()
{
    // printf("Hello, World!\n");
    // int n = 1234;
    // printf("%f", log10(n) + 1);
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++) printf("%d", arr[i]);

    return 0;
}
