#include <stdio.h>

int main()
{
    int i, n, fact = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    // for (i = 0; i<n; i++)
    // {
    //     // printf("Hello GGV\n");
    //     // printf("Hello GGV %d\n", i+1);
    //     fact *= (i+1);
    // }
    int sum = 0;
    for (i = 1; i <= n; i++) sum += i*i*i;
    printf("The sum of series till %d is: %d\n",n, sum); 
    printf("%d", 55*55);
    return 0;
}