#include <stdio.h>

int main()
{
	char c;
	printf("Enter a character: ");
	scanf("%c", &c);
	
	if (c >= 'a' && c <= 'z') printf("The Uppercase of this character is %c", c - 32);
	else if (c >= 'A' && c <= 'Z') printf("The Lowercase of this character is %c", c + 32);
	else printf("The entered character is not an alphabet");
	return 0;
}