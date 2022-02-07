#include <stdio.h>

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	
	int k  = 10;
	int l = 0, h = n-1, ans = -1;
	while (l <= h)
	{
		int mid =(l + h) / 2;
		
		if (arr[mid] > k) h = mid - 1;
		else if (arr[mid] < k) l = mid + 1;
		else 
		{
			ans = mid;
			break;
		}
	}
	if (ans == -1) printf("The number is not in the array");
	else printf("The number is found at index %d", ans);
	
	return 0;
}