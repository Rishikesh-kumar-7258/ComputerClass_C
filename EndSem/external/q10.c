/*
Write a C program to store 10 number in one dimensional array and check all number that if tens place of
each number is 2 then change it to 5.
*/

#include <stdio.h>

int main()
{
	
	int n = 10;
	int arr[n];
	printf("Enter the elements: ");
	
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
	
	for (int i = 0; i < n; i++)
	{
		int temp = arr[i];
		if (temp >= 20 && temp < 30) arr[i] += 30;
	}
	
	for (int i = 0;i < n; i++) printf("%d ", arr[i]);
	
	return 0;
}