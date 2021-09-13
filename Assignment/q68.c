#include <stdio.h>

void swap(int*, int*);

int main()
{
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	
	swap(&a, &b);
	
	printf("The values after swapping a=%d, b=%d", a, b);
	
	return 0;
}

void swap(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
