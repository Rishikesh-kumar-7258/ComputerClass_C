#include <stdio.h>

struct {
	char name[30];
	int jersey;
} Player;

int main() {
	Player;
	printf("Player Name: ");
	scanf(" %[^\n]*c", &Player.name);
	printf("Jersey Numbere: ");
	scanf("%d", &Player.jersey);

	printf("%s has jersey number %d\n", Player.name, Player.jersey);


	return 0;
}