// Check whether the number is palindrom or not

#include <stdio.h>

int main()
{
	int n; 
	printf("Enter the number: ");
	scanf("%d", &n);
	
	int rev = 0, temp = n;
	
	while (temp)
	{
		rev = rev * 10 + temp % 10;
		temp /= 10;
	}
	
	if (n == rev) printf("The number is a palindrom");
	else printf("The number is not a palindrom");
	
	return 0;
}