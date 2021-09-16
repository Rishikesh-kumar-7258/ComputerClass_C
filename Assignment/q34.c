/* Find if a number is an armstrong number */

#include <stdio.h>

int main() {
	
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);

	int qsum = 0, temp = n;
	
	while(temp)
	{
		int rev = temp %10;
		qsum += rev*rev*rev;
		
		temp /= 10;
	}
	
	if (qsum == n) printf("It is an armstrong number");
	else printf("It is not an armstrong number");

	return 0;
}