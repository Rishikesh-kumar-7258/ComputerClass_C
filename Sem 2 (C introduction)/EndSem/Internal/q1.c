/*Write a C program to add all even digits of given number N.(eg. If input number is 21456 then it
will display 2+4+6 means 12) using function.*/

#include <stdio.h>

// Initialising the function
int sumEven(int);

int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	
	printf("The sum of even digits is %d", n);
	return 0;
}

int sumEven(int n)
{
	// taking a sum variable to store the sum of even elements
	int sum = 0;
	
	// using while loop until n is not equal to 0
	while (n)
	{
		int rem = n%10; // last digit of the current numbere
		if ((rem&1) == 0) sum += rem; // if the last digit is even then we added it to sum
		
		n /= 10; // divided the number by 10 (345 becomes 34)
	}
	
	return sum; // returning an int value since the return type of function is int
}