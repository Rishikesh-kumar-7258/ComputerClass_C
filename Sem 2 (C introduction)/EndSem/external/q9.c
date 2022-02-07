/*Write a C program to swap two number using function swap() that is available in swap.h header file(you have
to create this header file) and print the swapped value in main function.
*/

#include <stdio.h>
#include "swap.h"

int main()
{
	
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d%d", &a, &b);
	
	swap(&a, &b);
	printf("The numbers after swapping a=%d, b=%d", a, b);
	
	return 0;
}