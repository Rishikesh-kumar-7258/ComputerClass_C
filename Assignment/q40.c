/* Arrays */

#include <stdio.h>

int main() {
	
	int n;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	
	int arr[n];
	printf("Enter the elements: ");
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
	
	printf("printing the array...\n");
	for(int i = 0; i < n; i++) printf("%d ", arr[i]);
	
	return 0;
}