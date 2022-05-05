#include <stdio.h>

// Q Bubble sort
void bubbleSort(int arr[], int n)
{
    
    for (int i=0; i<n-1; i++)
    {
        int cnt = 0;
        for (int j=0; j<n-1-i; j++)
        {
            if (arr[j] > arr[j+1]) 
            {
                arr[j] ^= arr[j+1];
                arr[j+1] ^= arr[j];
                arr[j] ^= arr[j+1];

                cnt++;
            }
        }

        if (cnt == 0) break;
    }

    return;
}



int main()
{
    printf("Enter the number of elements: ");
    int n; 
    scanf("%d", &n);

    printf("Enter the elements: ");
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    bubbleSort(arr, n);

    for (int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}