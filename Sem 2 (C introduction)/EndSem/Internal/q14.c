/*Write a C program to display all odd number up to N but not display the number having 5 in its unit
place.(eg. If N=23 then it will display 1,3,7,9,11,13,17,19,21,23)*/

#include <stdio.h>


int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i+=2)
	{
		if (i%10 == 5) continue;
		
		printf("%d ", i);
	}
	
	return 0;
}