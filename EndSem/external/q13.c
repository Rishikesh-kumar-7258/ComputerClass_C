/*
Write a C program to sort the given numbers in descending order.(e. g. if numbers are 23 45 67 12 9 5 then
descending order is 67 45 23 12 9 5)
*/

#include <stdio.h>

int main()
{
	
	int n;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	
	printf("Enter the elements: ");
	int arr[n];
	for (int i =0; i < n; i++) scanf("%d", &arr[i]);
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-i-1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				arr[j]  = arr[j] ^ arr[j+1];
				arr[j+1]  = arr[j] ^ arr[j+1];
				arr[j]  = arr[j] ^ arr[j+1];
			}
		}
	}
	
	int i = 0, j= n-1;
	
	while (i < j)
	{
		arr[i] = arr[i] ^ arr[j];
		arr[j] = arr[i] ^ arr[j];
		arr[i] = arr[i] ^ arr[j];
		i++; j--;
	}
	
	printf("The array in descentding order is: ");
	for (i = 0; i< n; i++) printf("%d ", arr[i]);
	
	return 0;
}