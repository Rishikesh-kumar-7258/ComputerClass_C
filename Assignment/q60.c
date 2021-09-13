#include <stdio.h>

int main()
{
	int n;
	printf("Enter the length of array: ");
	scanf("%d", &n);
	
	int arr[n];
	printf("Enter the elements: ");
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-i-1; j++)
		{
			if (arr[j] > arr[j+1]) 
			{
				arr[j] = arr[j] ^ arr[j+1];
				arr[j+1] = arr[j] ^ arr[j+1];
				arr[j] = arr[j] ^ arr[j+1];
			}
		}
	}
	
	printf("The sorted array is : ");
	for (int i = 0; i < n; i++) printf("%d ", arr[i]);
			
	return 0;
}