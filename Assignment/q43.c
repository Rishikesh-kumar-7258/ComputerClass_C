/* print odd and even in the array */

#include <stdio.h>

int main() {
	
	int n;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	
	int arr[n];
	printf("Enter the elements: ");
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
	
	for (int i = 0; i < n; i++) 
	{
		if (arr[i]&1) printf("Odd ");
		else printf("Even ");
	} 
	
	return 0;
}