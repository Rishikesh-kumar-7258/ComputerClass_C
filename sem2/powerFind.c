#include <stdio.h>

int power(int, int);

int word_len(char []);

int main()
{
    // int a, b;
    // printf("Enter two numbers: ");
    // scanf("%d %d", &a, &b);
    // printf("The %d^%d is %d", a, b, power(a, b));

    char name[50];
    printf("Enter your name: ");
    scanf("%[^\n]*c", &name);

    printf("The length of %s is %d", name, word_len(name));


    return 0;
}

int power(int a, int b)
{
    // int ans = 1;
    // while (b)
    // {
    //     if (b&1)
    //     {
    //         ans *= a;
    //         b--;
    //     }
    //     else
    //     {
    //         ans *= ans;
    //         b /= 2;
    //     }

    //     printf("%d ", ans);
    // }

    // return ans;
    int ans = 1;
    
    if (b == 0) return ans;

    if (b&1) 
    {
        ans = a*power(a, b-1);
    }
    else
    {
        ans = power(a*a, b/2);
    }

    return ans;
}


int word_len(char arr[])
{
    int i = 0, count = 0;

    while (arr[i] != '\0')
    {
        if (arr[i] == ' ') 
        {
            i++;
            continue;
        }
        count++;
        i++;
    }

    return count;
}

#include<stdio.h>

int main(){
    char str[40], *pt;
    int i = 0;
    printf("Enter the name to calculate length: \n");

    gets(str);

    pt = str;

    while((*pt) != '\0')
    {
        i++;
        pt++;
    }

    --pt;
    while (i--)
    {
        printf("%c", *pt);
        --pt;
    }

    // printf("The length of string is string: %d",i);
    return 0;
}