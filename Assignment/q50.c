#include <stdio.h>

int main()
{
	char name[50];
	printf("Enter the name: ");
	scanf("%[^\n]*c", &name);
	
	int i = 0;
	while (name[i] != '\0') 
	{
		name[i]++;
		i++;
	}
		
	
	printf("The name after encryption is %s", name);
	
	return 0;
}