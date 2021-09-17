/*Write a C program to calculate factorial of number N using your own header file like factorial.h and in header
file fact function will calculate factorial and return the value to main function and print.*/

#include <stdio.h>
#include "factorial.h"
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d", &n);
	
	printf("The factorial is %d", fact(n));
	return 0;
}