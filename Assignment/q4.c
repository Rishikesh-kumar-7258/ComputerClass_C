#include <stdio.h>

int main()
{
	char c;
	printf("Enter a character: ");
	scanf("%c", &c);
	
	printf("The given character is ");
	if (c == 'A') printf("A");
	else printf("not A");
	printf("\n");
	
	return 0;
}