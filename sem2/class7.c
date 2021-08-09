#include <stdio.h>
#include <string.h>

int main()
{
    int row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d", 2*i);
        }
        printf("\n");
    }

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j=0; j < 2*i+1; j++)
    //     {
    //         printf("%c", 'A');
    //     }
    //     printf("\n");
    // }

    // for(int I = 65; I <= 65 + row; I++)
    // {
    //     for(int j = 65; j <= I; j++)
    //         printf("%c", 'a' + j);
    // }

        // for (int i = 0; i<row; i++)
        // {
        //     for (int j=0; j <= i; j++)
        //     {
        //         printf("%c", ('A'+j));
        //     }

        //     printf("\n");
        // }

        // for (int i = row; i >0; i--)
        // {
        //     char str[i+1];
        //     memset(str, 'A', i);
        //     str[i] = '\0';
        //     printf("%s\n", str);
        // }

        // for (int i = 1; i <= row; i++)
        // {
        //     char str[i+1];
        //     memset(str, '*', i);
        //     str[i] = '\0';
        //     printf("%s\n", str);
        // }

        // char str[5];
        // memset(str, '*', 4);
        // str[4] = '\0';
        // printf("%s\n", str);
        return 0;
}