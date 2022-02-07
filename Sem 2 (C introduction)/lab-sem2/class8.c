#include <stdio.h>

int main()
{
    int a; 
    printf("Enter the number: ");
    scanf("%d", &a);

    for (int i = 0; i <= a; i+=2)
    {
        printf("%d\n", i);
    }
    // int a, b, product;
    // printf("Enter the numbers : ");
    // scanf("%d %d", &a, &b);
    // product = a*b;
    // while (a > 0)
    // {
    //     int temp = a;
    //     a = b%a;
    //     b = temp;
    // }

    // printf("The lcm of two numbers is : %d", (product/b));
    // int num, reverse = 0, temp = num;
    // printf("Enter the number: ");
    // scanf("%d", &num);

    // while (num)
    // {
    //     reverse = (reverse * 10) + (num%10);
    //     num /= 10;
    // }

    // if (temp == reverse) printf("The number is a palindrom number.");
    // else printf("The number is not a palindrom number");

    // printf("The reverse of number is : %d", reverse);


    // while (num)
    // {
    //     sum += num%10;
    //     num /= 10;
    // }

    // printf("sum is : %d", sum);
    // char c;
    // printf("Enter any character from a to z: ");
    // scanf("%c", &c);

    // // c = c - 32;
    // c = c - 'a' + 'A';

    // printf("The capital character is %c", c);
    // int a, b;
    // printf("Enter the numbers: ");
    // scanf("%d%d", &a, &b);

    // a = a^b;
    // b = a^b;
    // a = a^b;

    // printf("The numbers after swapping is: %d %d", a , b);
    // return 0;
}