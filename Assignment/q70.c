#include <stdio.h>

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int *ptr = arr;
	
	for (int i = 0; i< n; i++) printf("%d ", *ptr++);
	printf("\n");
	
	int a[3][3] = {
				{1, 2, 3}, 
				{4, 5, 6}, 
				{7, 8, 9}
			};
	int m = 3;
	n = 3;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) printf("%d ", (*a[i])++);
		printf("\n");
	}
	
	
	return 0;
}