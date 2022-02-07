/* Calculate the size of array */

#include <stdio.h>

int main() {
	
	int n;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	
	int arr[n];
	printf("Enter the elements: ");
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
	
	int size = sizeof(arr)/ sizeof(arr[0]);
	printf("The size of array is %d", size);
	
	return 0;
}