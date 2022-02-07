#include <stdio.h>

void display(int);

int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	
	display(n);
	
	return 0;
}

void display(int a)
{
	printf("%d", a);
}
