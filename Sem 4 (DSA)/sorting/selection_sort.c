#include <stdio.h>

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int small_i=i;
        for (int j = i; j < n; j++)
        {
            if (arr[small_i] > arr[j]) small_i = j;
        }

        int temp = arr[i];
        arr[i] = arr[small_i];
        arr[small_i] = temp;
    }
}

int main()
{
    printf("Enter the number of elements: ");
    int n; scanf("%d", &n);

    printf("Enter the elements: ");
    int arr[n] ;
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    selectionSort(arr, n);

    printf("Sorted array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}