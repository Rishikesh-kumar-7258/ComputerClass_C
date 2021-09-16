/* Addition of 2D matrices */

#include <stdio.h>

int main() {
	
	int n, m;
	printf("Enter the dimentions of array: ");
	scanf("%d %d", &n, &m);
	
	int arr[n][m];
	printf("Enter the elements: ");
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) scanf("%d", &arr[i][j]);
	
	int brr[n][m];
	printf("Enter the elements: ");
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) scanf("%d", &brr[i][j]);
	
	int ans[n][m];
	
	for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) ans[i][j] = arr[i][j] + brr[i][j];
	
	printf("printing the array...\n");
	for(int i = 0; i < n; i++) 
	{
		for(int j = 0; j < m; j++) printf("%d ", ans[i][j]);
		printf("\n");
	}
	
	return 0;
}