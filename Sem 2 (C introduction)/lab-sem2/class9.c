#include <stdio.h>

int main()
{
    // Armstrong number
    int n; 
    printf("Enter the number: ");
    scanf("%d", &n);

    int temp = n, sum = 0;
    while (temp)
    {
        int rem = temp%10;
        sum += rem*rem*rem;
        temp /= 10;
    }

    if (sum == n) printf("The given number is an Armstrong number\n");
    else printf("The given number is not an armstrong number\n");

    return 0;
}