#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of row: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j&1) printf("%c", '0'+j);
            else printf("%c", 'A'+j);
        }
        printf("\n");
    }
    return 0;
}