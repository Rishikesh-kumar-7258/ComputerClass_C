/*
Write a C program using structure to make a BOOK structure and its member bookid, bookname, bookprice
and insert 10 book details and display the costliest bookname.)
*/

#include <stdio.h>

typedef struct
{
	int id, price;
	char name[30];
} Book;

int main()
{
	
	int n= 10;
	Book arr[n];
	printf("Enter the details of book\nid	name	price\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%d%s%d", &arr[i].id, &arr[i].name, &arr[i].price);
	}
	
	Book cost = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i].price > cost.price) cost = arr[i];
	}
	
	printf("The costlies book is %d %s %d", cost.id, cost.name, cost.price);
	
	return 0;
}