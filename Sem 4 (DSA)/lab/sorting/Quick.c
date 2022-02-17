#include <stdio.h>

int pivot(int arr[], int l, int h)
{
    int p = arr[h];

    int i = 0, curr = l;
    for (i = l; i <= h; i++)
    {
        if (arr[i] < p)
        {
            int temp = arr[curr];
            arr[curr] = arr[i];
            arr[i] = temp;
            curr++;
        }
    }

    int temp = arr[curr];
    arr[curr] = arr[h];
    arr[h] = temp;

    return curr;
}

void QuickSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = pivot(arr, l, h);
        QuickSort(arr, l, p - 1);
        QuickSort(arr, p + 1, h);
    }
}

int main()
{
    printf("Enter the size of the array: ");
    int n; scanf("%d", &n);

    printf("Enter the eleements of the array: ");
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    
    QuickSort(arr, 0, n - 1);
    printf("Sorted Array : ");

    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}