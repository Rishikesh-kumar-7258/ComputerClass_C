#include <stdio.h>

int main()
{
    char name[100];
    printf("Enter your name: ");
    scanf("%s", &name);

    int length = 0;
    int i = 0;
    while (name[i] != '\0')
    {
        length++;
        i++;
    }
    printf("The length of the name is %d", length);
    return 0;
}