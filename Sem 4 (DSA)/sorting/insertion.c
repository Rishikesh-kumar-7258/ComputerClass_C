#include <stdio.h>

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i], j=i-1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;

    }
}

int main()
{
    printf("Enter the size of array: ");
    int n; scanf("%d", &n);
    int arr[n];

    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    insertionSort(arr, n);
    printf("Sorted array is: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");


    return 0;
}