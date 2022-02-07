#include <stdio.h>

int main()
{
	char name[30];
	printf("Enter the string: ");
	scanf("%[^\n]*c", &name);
	
	int i = -1;
	while (name[++i] != '\0') if (name[i] >= 'a' && name[i] <= 'z') name[i] -= 32;
	
	printf("The name in uppercase is %s", name);
	
	return 0;
}