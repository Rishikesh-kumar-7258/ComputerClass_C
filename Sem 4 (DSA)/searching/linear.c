#include <stdio.h>

int linearSearch(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target) return i;
    }

    return -1;
}

int main()
{
    printf("Enter the size of the array: ");
    int n; scanf("%d", &n);

    printf("Enter the elements : ");
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter the element to find: ");
    int target; scanf("%d", &target);

    int ans = linearSearch(arr, n, target);

    if (ans == -1) printf("Not found\n");
    else printf("The element is present at %d\n", ans+1);

    return 0;
}