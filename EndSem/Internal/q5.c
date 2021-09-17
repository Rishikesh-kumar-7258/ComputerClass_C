/*Write a C program to create structure and insert 10 values of CAR having member brandname,
price, year and display all the CAR brandname having price more than 400000/-(4 Lakh).*/

#include <stdio.h>

typedef struct
{
	char brand[30];
	int price, year;
} Car;


int main()
{
	int n = 10;
	Car arr[10];
	printf("Enter the details\nBrand	Price	Year:\n");
	
	for (int i = 0; i < n; i++) scanf("%s%d%d", &arr[i].brand, &arr[i].price, &arr[i].year);
	
	for (int i = 0; i < n; i++)
	{
		if (arr[i].price > 400000) printf("%s of price %d was manufactured in %d", arr[i].brand, arr[i].price, arr[i].year);
	}
	return 0;
}