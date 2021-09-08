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