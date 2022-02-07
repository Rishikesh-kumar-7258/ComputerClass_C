#include <stdio.h>

typedef struct
{
	char name[30];
	int jersey;
}Player;

int main()
{
	Player prince;
	
	printf("Enter the name: ");
	scanf("%s", &prince.name);
	
	printf("Enter the jersey: ");
	scanf("%d", &prince.jersey);
	
	printf("%s player jersey number %d", prince.name, prince.jersey);
	
	return 0;
}