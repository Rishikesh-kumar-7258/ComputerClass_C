#include <stdio.h>

struct Player
{
	char name[30];
	int jersey;
};

int main()
{
	struct Player arr[11];
	
	for (int i = 0; i < 11; i++) 
	{
		printf("Player Name: ");
		scanf(" %[^\n]*c", &arr[i].name); // The space before the %[^\n]*c specifier is neccessary of the code will break
		printf("Jersey Number: ");
		scanf("%d", &arr[i].jersey);
	}
	
	for (int i = 0; i < 11; i++) printf("%s player has jersey number %d\n", arr[i].name, arr[i].jersey);
	
	
	return 0;
}