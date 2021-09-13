#include <stdio.h>

void display(char);

int main()
{
	char c;
	printf("Enter the character: ");
	scanf("%c", &c);
	
	display(c);
	
	return 0;
}

void display(char c)
{
	while (c <= 'Z') printf("%c ", c++);
}