#include <stdio.h>

// Arrays
int main()
{
    int n = 4;
    float a[n], sum = 0, avg;
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
    {
        // printf("Enter the %d number: \n", i + 1);
        scanf("%f", &a[i]);
    }

    for (int i = 0; i <= n / 2; i++)
    {
        int temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - i - 1] = temp;
    }
    for (int i = 0; i < n; i++)
        printf("%f ", a[i]);

    // for (int i = 0; i < n; i++)
    //     sum += a[i];
    // avg = sum / n;

    // printf("The average is: %.2f", avg);

    return 0;
}

// int main()
// {
//     int num[5] = {1, 2, 3, 4, 5};
//     // clrscr();
//     printf("\n num[0] = % d address : % u", num[0], &num[0]);
//     printf("\n num[1] = % d address : % u", num[1], &num[1]);
//     printf("\n num[2] = % d address : % u", num[2], &num[2]);
//     printf("\n num[3] = % d address : % u", num[3], &num[3]);
//     printf("\n num[4] = % d address : % u", num[4], &num[4]);
// }