/* Print 2D array */

#include <stdio.h>

int main() {
	
	int n, m;
	printf("Enter the dimentions of array: ");
	scanf("%d %d", &n, &m);
	
	int arr[n][m];
	printf("Enter the elements: ");
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) scanf("%d", &arr[i][j]);
	
	printf("printing the array...\n");
	for(int i = 0; i < n; i++) 
	{
		for(int j = 0; j < m; j++) printf("%d ", arr[i][j]);
		printf("\n");
	}
	
	return 0;
}