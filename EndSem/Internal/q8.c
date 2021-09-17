/*Write a C program to find total number that is even and divisible by 3 in given two dimensional
matrix using pointer:
4 47 9
3 45 12
30 18 120*/

#include <stdio.h>

int main()
{
	int arr[3][3] = {
			{4, 47, 9},
			{3, 45, 12},
			{30, 18, 120}
			};
			
	int even = 0, div = 0;
	
	for (int i = 0; i < 3; i++)
	{
		for (int j=0; j < 3; j++)
		{
			int num = (*arr[i])++;
			if (num%2 == 0) even++;
			
			if (num%3 == 0) div++;
		}
	}
	
	printf("The number of even numbers is %d and number of divisible by 3 is %d", even, div);
}