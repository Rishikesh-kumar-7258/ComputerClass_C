#include <stdio.h>

void print1D(int *arr, int n);
void print2D(int n, int m, int arr[][m]);

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    print1D(arr, n);

    int arr2[][3] = {{1, 2, 3}, {3, 4, 5}, {6, 7, 8}};
    n = sizeof(arr2) / sizeof(arr2[0]);
    int m = sizeof(arr2[0]) / sizeof(arr2[0][0]);
    print2D(n, m, arr2);

    return 0;
}

void print1D(int *arr, int n)
{
    int i = 0;
    while (i < n)
    {
        printf("%d ", *arr);
        arr++;
        i++;
    }

    printf("\n");
}

void print2D(int n, int m, int arr[][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j=0; j < m; j++)
        {
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }
}