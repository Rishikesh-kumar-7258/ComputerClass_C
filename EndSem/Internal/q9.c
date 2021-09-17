/*Write a C program to swap two number A and B without using third variable. Solve this using call
by reference.*/

#include <stdio.h>

void swap(int *, int *);

int main()
{
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d%d", &a, &b);
	
	swap(&a, &b);
	printf("The numbers after swapping : a=%d, b=%d", a, b);
	
}

void swap(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}