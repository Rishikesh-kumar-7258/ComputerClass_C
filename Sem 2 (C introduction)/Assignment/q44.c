/* Reverse the array */

#include <stdio.h>

int main() {
	
	int n;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	
	int arr[n];
	printf("Enter the elements: ");
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
	
	int i = 0, j= n-1;
	while (i < n/2)
	{
		arr[i]  = arr[i] ^ arr[j];
		arr[j] = arr[i] ^ arr[j];
		arr[i] = arr[i] ^ arr[j];
		i++;
		j--;
	}
	
	printf("The array after reversing is...\n");
	for (int i = 0; i < n; i++) printf("%d ", arr[i]);
	
	return 0;
}