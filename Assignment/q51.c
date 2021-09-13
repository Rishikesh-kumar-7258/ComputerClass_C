#include <stdio.h>

int main()
{
	char str[30];
	printf("Enter the string: ");
	scanf("%[^\n]*c", &str);
	
	printf("The entered string is %s", str);
	
	return 0;
}