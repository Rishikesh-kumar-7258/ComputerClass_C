#include <stdio.h>

void merge(int arr[], int l, int mid, int h)
{
    int n1 = mid - l + 1;
    int n2 = h - mid;

    int left[n1], right[n2];

    for (int i = 0; i < n1; i++)
        left[i] = arr[l + i];

    for (int i = 0; i < n2; i++)
        right[i] = arr[mid + i + 1];

    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (left[i] < right[j])
        {
            arr[l + k] = left[i];
            i++;
        }
        else
        {
            arr[l + k] = right[j];
            j++;
        }

        k++;
    }

    while (i < n1)
    {
        arr[l + k] = left[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[l + k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;

        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, h);

        merge(arr, l, mid, h);
    }
}

void mergeSortIterative(int arr[], int l, int h)
{
    for (int size = 1; size <= h + 1; size *= 2)
    {
        for (int left = 0; left < h; left += 2 * size)
        {
            int mid = left + size - 1 > h ? h : left + size - 1;
            int right = left + 2 * size - 1 > h ? h : left + 2 * size - 1;

            merge(arr, left, mid, right);
        }
    }
}

int main()
{
    printf("Enter the number of elements: ");
    int n;
    scanf("%d", &n);

    printf("Enter the elements: ");
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    mergeSortIterative(arr, 0, n - 1);

    printf("The sorted array is : ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}