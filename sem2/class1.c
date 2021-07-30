#include <stdio.h>


int main()
{
    char c;
    char str[10];
    char sen[100];

    scanf("%c", &c);
    scanf("%s", &str);
    scanf(" %[^\n]%*c", &sen);

    printf("%c\n", c);
    printf("%s\n", str);
    printf("%s\n", sen);
    return 0;
}