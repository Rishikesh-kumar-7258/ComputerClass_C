#include <stdio.h>

int main()
{
	int n;
	printf("Enter the length of array: ");
	scanf("%d", &n);
	
	int arr[n];
	printf("Enter the elements: ");
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
	
	int k;
	printf("Enter the number to find: ");
	scanf("%d", &k);
	
	int found = -1;
	for (int i=0; i<n; i++) 
	{
		if (k == arr[i]) 
		{
			found = i;
			break;
		}
	}
	
	if (found != -1) printf("The number is present at %d", found);
	else printf("Not present in the array");
	
	
	return 0;
}