/*Write a C program to count total number of bit 1 in given number N.(e.g if Number is 14 means in binary 1110
total number of 1 in binary is 3 will be output).*/

#include <stdio.h>


int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d", &n);
	
	int count = 0, temp = n;
	
	while (temp)
	{
		count++;
		temp &= temp-1;
	}
	
	printf("The number os 1's' is %d", count);
	return 0;
}