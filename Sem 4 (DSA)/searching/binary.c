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

int binarySearchIterative(int arr[], int l, int h, int target)
{
    int stack[h];
    int top = -1;
    stack[++top] = l;
    stack[++top] = h;

    while (top >= 0)
    {
        int high = stack[top--];
        int low = stack[top--];

        int mid = (low + high) / 2;

        if (arr[mid] > target) high = mid - 1;
        else if (arr[mid] < target) low = mid + 1;
        else return mid;

        if (low > high) break;

        stack[++top] = low;
        stack[++top] = high;
    }

    return -1;
}

int binarySearchIterative2(int arr[], int l, int h, int target)
{
    while (l <= h)
    {
        int mid = (l + h) / 2;

        if (arr[mid] > target) h = mid-1;
        else if (arr[mid] < target) l = mid + 1;
        else return mid;
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

    int ans = binarySearchIterative2(arr, 0, n-1, target);

    if (ans == -1) printf("Not found\n");
    else printf("The element is present at %d\n", ans+1);

    return 0;
}