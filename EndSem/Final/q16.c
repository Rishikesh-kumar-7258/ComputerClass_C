#include <stdio.h>

typedef struct
{
	char branch[30], name[30];
	int roll;
}Student;

int main()
{
	Student arr[70];
	printf("Enter the details of students: \n");
	for (int i = 0; i < 70; i++)
	{
		printf("Enter the roll: ");
		scanf("%d", &arr[i].roll);
		printf("Enter the Name: ");
		scanf(" %[^\n]*c", &arr[i].name);
		printf("Enter the Branch: ");
		scanf(" %[^\n]*c", &arr[i].branch);
	}
	
	for (int i = 0; i < 70; i++)
	{
		printf("The student %s in branch %s has roll %d\n", arr[i].name, arr[i].branch, arr[i].roll);
	}
	return 0;
}