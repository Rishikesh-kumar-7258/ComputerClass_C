#include <stdio.h>

int main()
{
	char name[30];
	printf("Enter the name: ");
	scanf("%[^\n]*c", &name);
	
	int i = 0, len = 0;
	while (name[i] != '\0') len += (name[i++] != ' ');
	
	printf("The length of the string is %d", len);
	
	return 0;
}