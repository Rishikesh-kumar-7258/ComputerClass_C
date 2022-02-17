#include <stdio.h>

int binarySearch(int arr[], int l, int h, int target)
{
    if (l > h) return -1;
    
    int mid = (l + h) / 2;

    if (arr[mid] < target) l = mid + 1;
    else if (arr[mid] > target) h = mid - 1;
    else return mid;

    return binarySearch(arr, l, h, target);
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

    int ans = binarySearch(arr, 0, n-1, target);

    if (ans == -1) printf("Not found\n");
    else printf("The element is present at %d\n", ans+1);

    return 0;
}