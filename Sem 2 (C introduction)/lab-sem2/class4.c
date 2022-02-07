#include <stdio.h>

int main()
{
    // And (&&) operator
    // int a = 12, b = 56;

    // if (a && b)
    // {
    //     printf("A and B is Not Zero");
    // }
    // else
    // {
    //     printf("Either a or b or both zero");
    // }

    // check if the given number is 3 or 5
    // int n;
    // printf("Enter your number : ");
    // scanf("%d", &n);

    // if (n == 3 || n == 5)
    // {
    //     printf("Entered number is 3 or 5 always");
    // }
    // else
    // {
    //     printf("Entered number is another number");
    // }

    // check if the entered number is vowel of consonent
    // char c;
    // printf("Enter the character: ");
    // scanf("%c", &c);

    // if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    // {
    //     printf("Entered character is vowel");
    // }
    // else
    // {
    //     printf("Entered character is consonent");
    // }

    // double r, area;
    // printf("Enter the radius of circle: ");
    // scanf("%lf", &r);

    // area = 2 * 3.14 * r;

    // if (area < 100)
    // {
    //     printf("Area is less than 100");
    // }
    // else if (area > 100 && area < 200)
    // {
    //     printf("Area is between 100 and 200");
    // }
    // else
    // {
    //     printf("Area is greter than 100");
    // }

    // int n;
    // printf("Enter your number : ");
    // scanf("%d", &n);

    // if (((n&1) == 0) && (n%10 == 6))
    // {
    //     printf("Entered number is even and last digit is 6");
    // }
    // else
    // {
    //     printf("Not what you wanted!!!");
    // }

    int angle1, angle2, angle3;

    printf("Enter the angles: ");
    scanf("%d%d%d", &angle1, &angle2, &angle3);

    if (angle1 + angle2 + angle3 != 180)
    {
        printf("Invald input for a triangle");
    }
    else if (angle1 == angle2 && angle3 == angle2)
    {
        printf("Entered number is an Equilateral triangle");
    }
    else if (angle1 == angle2 || angle1 == angle3 || angle2 == angle1)
    {
        printf("It is an isosceles triangle");
    }
    else 
    {
        printf("It is an isosceles triangle");
    }

    return 0;
}