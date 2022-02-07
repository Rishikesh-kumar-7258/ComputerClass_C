/* Print transpose of 2D matrix */

#include <stdio.h>

int main() {
	
	int n, m;
	printf("Enter the dimentions of array: ");
	scanf("%d %d", &n, &m);
	
	int arr[n][m], ans[m][n];
	printf("Enter the elements: ");
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) scanf("%d", &arr[i][j]);
	
	for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) ans[j][i] = arr[i][j];
	
	printf("printing the array...\n");
	for(int i = 0; i < n; i++) 
	{
		for(int j = 0; j < m; j++) printf("%d ", ans[j][i]);
		printf("\n");
	}
	
	return 0;
}