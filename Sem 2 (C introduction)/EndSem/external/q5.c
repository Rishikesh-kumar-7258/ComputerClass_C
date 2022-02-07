#include <stdio.h>

typedef struct
{
	int roll;
	char name[30], branch[40];
}Student;

int main()
{
	Student arr[10];
	printf("Enter the details: \nName  roll branch\n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%[^\n]*c", &arr[i].name);
		scanf("%d", &arr[i].roll);
		scanf("%[^\n]*c", &arr[i].branch);
	}
	
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		if (sizeof(arr[i].name)/sizeof(arr[i].name[0]) > 10) count++;
	}
	
	return 0;
}

//#include <stdio.h>
//struct book
//{
//    int bookid;
//    char bookname[20];
//    int bookprice;
//};
//
//int main()
//{
//    struct book bk[10];
//    printf("Enter book  id, name and price: \n");
//    for (int i = 0; i < 10; i++)
//    {
//        printf("Enter details of book-%d\n", i + 1);
//        scanf("%d%s%d", &bk[i].bookid, &bk[i].bookname, &bk[i].bookprice);
//    }
//
//	struct book cost = bk[0];
//    for (int i = 0; i < 10; i++)
//    {
//        if (bk[i].bookprice > cost.bookprice) cost = bk[i];
//    }
//    
//    printf("%s book with id %d is cosliest with cost %d", cost.bookname, cost.bookid, cost.bookprice);
//    return 0;
//}