/*
Write a C program to make the calculator for input a and b.
Given input a and b if you will choose option 1 means input 1 then it will add a and b and if you will choose
option 2 then it will subtract a and b and if you will choose option 3 then it will multiply a and b and if you
will choose option 4 then it will divide a and b using switch..case statement.
*/

#include <stdio.h>

int calculator(int, int, int);

int main()
{
	
	int a, b, opt;
	printf("Enter two numbers: ");
	scanf("%d%d", &a, &b);
	
	printf("Enter 1 to add\nEnter 2 to subtract\nEnter 3 to multiply\nEnter 4 to divide\n");
	scanf("%d", &opt);
	
	printf("The result of calculation is %d", calculator(a, b, opt));
	
	return 0;
}

int calculator(int a, int b, int opt)
{
	switch(opt)
	{
		case 1: return a + b;
		case 2 : return a - b;
		case 3 : return a * b;
		case 4 : return a / b;
		default : return -1;
	}
}