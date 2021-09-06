#include <stdio.h>


void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                arr[j] = arr[j] ^ arr[j+1];
                arr[j+1] = arr[j] ^ arr[j+1];
                arr[j] = arr[j] ^ arr[j+1];
            }
        }
    }


    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

void character_sort(char arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                arr[j] = arr[j] ^ arr[j+1];
                arr[j+1] = arr[j] ^ arr[j+1];
                arr[j] = arr[j] ^ arr[j+1];
            }
        }
    }

    for (int i = 0; i < n; i++) printf("%c ", arr[i]);
    printf("\n");
}

int main()
{
    // char arr[] = {'b', 'c', 'd', 'q', 'a', 'p', 'z', 'x', 'r'};
    char arr[] = "Prince";
    character_sort(arr, 8);
    return 0;
}