// // 1  print Hello ggv
// #include <stdio.h>
// int main()
// {
//     printf("Hello ggv\n");
//     return 0;
// }

// //  2 Calculate the area of circle
// #include <stdio.h>
// int main()
// {
//     float r;
//     printf("Enter the radius of the circle: ");
//     scanf("%f", &r);
//     printf("The area of the circle is %f\n", 3.14 * r * r);
//     return 0;
// }

// //  3 Convert farhanite to celcius
// #include <stdio.h>
// int main()
// {
//     float f;
//     printf("Enter the temperature in farhanite: ");
//     scanf("%f", &f);
//     printf("The temperature in celcius is %f\n", (f - 32) * 5 / 9);
//     return 0;
// }

// // 4 Check if entered character is A or not using ASCII value
// #include <stdio.h>
// int main()
// {
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c", &ch);
//     if (ch == 65)
//     {
//         printf("The character is A\n");
//     }
//     else
//     {
//         printf("The character is not A\n");
//     }
//     return 0;
// }

// //  5 Check wether entered number is even or odd
// #include <stdio.h>
// int main()
// {
//     int t;
//     printf("Enter a number: ");
//     scanf("%d", &t);
//     if (t % 2 == 0)
//     {
//         printf("The number is even\n");
//     }
//     else
//     {
//         printf("The number is odd\n");
//     }
//     return 0;
// }

// //  6 Print Hello GGV 10 times with for loop
// #include <stdio.h>
// int main()
// {
//     int i;
//     for (i = 0; i < 10; i++)
//     {
//         printf("Hello ggv\n");
//     }
//     return 0;
// }

// // 6.1 Print Hello GGV 10 times with while loop
// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     while (i < 10)
//     {
//         printf("Hello ggv\n");
//         i++;
//     }
//     return 0;
// }

// //  7 Display last 2 digit of a number
// #include <stdio.h>
// int main()
// {
//     int t;
//     printf("Enter a number : \n");
//     scanf("%d", &t);
//     printf("The last 2 digit of the number is %d\n", t % 100);
//     return 0;
// }

// // 8 Print no from 1 to n
// #include <stdio.h>
// int main()
// {
//     int t, i;
//     printf("Enter a number : \n");
//     scanf("%d", &t);
//     for (i = 1; i <= t; i++)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }

// // 9 Print the table of t
// #include <stdio.h>
// int main()
// {
//     int t, i;
//     printf("Enter a number : \n");
//     scanf("%d", &t);
//     for (i = 1; i <= 10; i++)
//     {
//         // t = t * i;
//         printf("%d x %d = %d", t, i, t * i);
//         printf("\n");
//     }
//     return 0;
// }

// // 10 Print the factorial of t
// #include <stdio.h>
// int main()
// {
//     int t, i, fact = 1;
//     printf("Enter a number : ");
//     scanf("%d", &t);
//     for (i = t; i > 0; i--)
//     {
//         fact = fact * i;
//     }
//     printf("%d! = %d\n", t, fact);
//     return 0;
// }

// // 11 Print the sum of n numbers
// #include <stdio.h>
// int main()
// {
//     int t, i, sum = 0;
//     printf("Enter a number : ");
//     scanf("%d", &t);
//     sum = t * (t + 1) / 2;
//     printf("Sum of n numbers = %d", sum);
//     return 0;
// }

// // 12 Print the sum of the series n^2
// #include <stdio.h>
// int main()
// {
//     int t, i, sum_of_series;
//     printf("Enter a number : ");
//     scanf("%d", &t);
//     sum_of_series = t * (t + 1) * (2 * t + 1) / 6;
//     printf("Sum of the series = %d", sum_of_series);
//     return 0;
// }

// // 13 Print the sum of the series n^3
// #include <stdio.h>
// int main()
// {
//     int t, i, sum_of_series;
//     printf("Enter a number : ");
//     scanf("%d", &t);
//     sum_of_series = (t * (t + 1) / 2) * (t * (t + 1) / 2);
//     printf("Sum of the series = %d", sum_of_series);
//     return 0;
// }

// // 14 calculating a^b using for loop
// #include <stdio.h>
// int main()
// {
//     int a, b, i, product = 1;
//     printf("Enter a and b : ");
//     scanf("%d%d", &a, &b);
//     for (i = 1; i <= b; i++)
//     {
//         product = product * a;
//     }
//     printf("%d", product);
//     return 0;
// }

// // 15 Check if the person is eligible for voter id card or not
// #include <stdio.h>
// int main()
// {
//     int age;
//     printf("Enter your age: ");
//     scanf("%d", age);
//     if (age <= 18)
//     {
//         printf("You are not eligible");
//     }
//     else
//     {
//         printf("You are eligible");
//     }
//     return 0;
// }

// // 16 Calculate the average of 5 numbers
// #include <stdio.h>
// int main()
// {
//     int a, b, c, d, e;
//     float av;
//     printf("Enter 5 numbers: ");
//     scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
//     av = (a + b + c + d + e) / 5;
//     printf("Average of 5 numbers is %0.2f", av);
//     return 0;
// }

// // 17 Program to swap the variables using 3 variables
// #include <stdio.h>
// int main()
// {
//     int a, b, temp;
//     printf("Enter 2 numbers : ");
//     scanf("%d%d", &a, &b);
//     temp = a;
//     a = b;
//     b = temp;
//     printf("a = %d , b  = %d", a, b);
//     return 0;
// }

// // 18 Swap 2 numbers using 2 variables
// #include <stdio.h>
// int main()
// {
//     int a, b;
//     printf("Enter the value of a and b : ");
//     scanf("%d%d", &a, &b);
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     printf("a = %d , b = %d", a, b);
//     return 0;
// }

// // 19 Print the character form ASCII value
// #include <stdio.h>
// int main()
// {
//     int i;
//     printf("Enter a no : ");
//     scanf("%d", &i);
//     printf("%c", i);
//     return 0;
// }

// // 20 Print the ASCII value using character
// #include <stdio.h>
// int main()
// {
//     char c;
//     printf("Enter a character: ");
//     scanf("%c", &c);
//     printf("ASCII value of %c is %d", c, c);
//     return 0;
// }

// // 21 check if the character is vovel or consonent
// #include <stdio.h>
// int main()
// {
//     char c;
//     printf("Enter a character : ");
//     scanf("%c", c);
//     if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
//     {
//         printf("The character is a vovel");
//     }
//     else
//     {
//         printf("The character is consonent");
//     }
//     return 0;
// }

// // 22 Check if the triangle is of which type
// #include <stdio.h>
// int main()
// {
//     int a, b, c, sum;
//     printf("Enter the angles: ");
//     scanf("%d%d%d", &a, &b, &c);
//     sum = a + b + c;
//     if (sum == 180)
//     {
//         if (a == b && b == c)
//         {
//             printf("Triangle is equilateral");
//         }
//         else if (a == b || b == c || b == c)
//         {
//             printf("Triangle is isoceles");
//         }
//         else
//         {
//             printf("Triangle is scalen");
//         }
//     }
//     else
//     {
//         printf("This is invalid Triangle");
//     }
//     return 0;
// }

// // 23 Check weather the year is leap year or not
// #include <stdio.h>
// int main()
// {
//     int year;
//     printf("Enter a year : ");
//     scanf("%d", &year);
//     if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//     {
//         printf("The year is leap ");
//     }
//     else
//     {
//         printf("The year is not leap");
//     }
//     return 0;
// }

// // 25 Make a program using continue and break statement
// #include <stdio.h>
// int main()
// {
//     int i, n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         if (i < 10)
//         {
//             continue;
//         }
//         else if (i >= 10)
//         {
//             printf("%d\nHello GGV", i);
//             break;
//         }
//     }
//     if (n < 10)
//     {
//         printf("Input a larger number");
//     }
//     return 0;
// }

// // 26 Calculate HCF of two number
// #include <stdio.h>
// int main()
// {
//     int a, b, hcf, i;
//     printf("Enter 2 numbers : ");
//     scanf("%d%d", &a, &b);
//     i = a;
//     while (1)
//     {
//         if (a % i == 0 && b % i == 0)
//         {
//             hcf = i;
//             break;
//         }
//         else
//         {
//             i = i - 1;
//         }
//     }
//     printf("HCF of %d and %d is %d", a, b, hcf);
//     return 0;
// }

// // 27 Calculate the lcm of two number
// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     printf("Enter two numbers: ");
//     scanf("%d%d", &a, &b);
//     if (a > b)
//     {
//         c = a;
//     }
//     else
//     {
//         c = b;
//     }
//     while (c % a != 0 || c % b != 0)
//     {
//         c = c + 1;
//     }
//     printf("LCM of %d and %d is %d\n", a, b, c);

//     return 0;
// }

// // 28 Sum of the digits of the number
// #include <stdio.h>
// int main()
// {
//     int a, b, i = 0, sum = 0;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//     while (a != 0)
//     {
//         b = a % 10;
//         a = a / 10;
//         sum = sum + b;
//     }
//     printf("%d", sum);
//     return 0;
// }

// // 29 Check if the the number is palindrome or not
// #include <stdio.h>
// int main()
// {
//     int a, b, c, rev = 0;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//     b = a;
//     while (a != 0)
//     {
//         c = a % 10;
//         a = a / 10;
//         rev = rev * 10 + c;
//     }
//     if (b == rev)
//     {
//         printf("The number is palindrome\n");
//     }
//     else
//     {
//         printf("The number is not palindrome\n");
//     }
//     // printf("%d", rev);
//     return 0;
// }

// // 30 printing a right angled triangle
// #include <stdio.h>
// int main()
// {
//     int i, j, n;
//     printf("Enter the size of pattern: ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // 31 Reversed right angled triangle
// #include <stdio.h>
// int main()
// {
//     int i, j, n;
//     printf("Enter the size of pattern: ");
//     scanf("%d", &n);
//     for (i = n; i >= 1; i--)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // 32 print a bb ccc pattern
// #include<stdio.h>
// int main()
// {
//     int i , j , n;
//     printf("Enter the size ");
//     scanf("%d", &n);
//     for (i = 1; i <= n ; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%c", i + 64);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // 33 Print a ab abc abcd
// #include <stdio.h>
// int main()
// {
//     int i, j, n, a;
//     printf("Enter the size ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%c", j + 64);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // 34 Program to find Armstrong number
// #include <stdio.h>
// int main()
// {
//     int n, r, sum = 0, t;
//     printf("Enter the Number:");
//     scanf("%d", &n);
//     t = n;
//     while (n != 0)
//     {
//         r = n % 10;
//         sum = sum + r * r * r;
//         n = n / 10;
//     }
//     if (t == sum)
//     {
//         printf("Number is armstrong");
//     }
//     else
//     {
//         printf("Number is not armstrong");
//     }
//     return 0;
// }

// // 35 Program to count the total no of digits
// #include <stdio.h>
// int main()
// {
//     int t, i = 0, tem;
//     printf("Enter a number: ");
//     scanf("%d",&t);
//     while (t != 0)
//     {
//         tem = t % 10;
//         t = t / 10;
//         i++;
//     }
//     printf("The size of the number is %d",i);
//     return 0;
// }

// // 36 Program to find even number by bitwise operator
// #include <stdio.h>
// int main()
// {
//     int t;
//     printf("Enter a number to check if its even or not : ");
//     scanf("%d",&t);
//     if (t&1 != 0){
//         printf("The number %d is odd",t);
//     }
//     else
//     {
//         printf("The number %d is even",t);
//     }
//     return 0;
// }

// // 37 Program to find the no of ones of a number in binary form
// #include<stdio.h>
// int main()
// {
//     int num, i = 0, t;
//     printf("Enter a number : ");
//     scanf("%d",&num);
//     t = num;
//     while (t != 0)
//     {
//        i += t & 1;
//        t>>= 1;
//     }
//     printf("No of ones in the number %d is %d",num , i);
//     return 0;
// }

// // 38 calculate minimum number of bits required to make the integer
// #include<stdio.h>
// int main()
// {
//     int num, i = 0, tem;
//     printf("Enter a number : ");
//     scanf("%d",&num);
//     tem = num;
//     while (tem != 0)
//     {
//         tem >>= 1;
//         i++;
//     }
//     printf("Minimum no of bits required for the number %d is %d", num, i);
//     return 0;
// }

// // 39 Check wether the  integer at input is set or not
// #include <stdio.h>
// int main()
// {
//     int num, j, tem;
//     printf("Enter a number and position: ");
//     scanf("%d%d", &num, &j);
//     tem = num;
//     tem >>= j;
//     tem = tem & 1;
//     if (tem == 0)
//     {
//         printf("%d at %d is not a set", num, j);
//     }
//     else
//     {
//         printf("%d at %d is a set", num, j);
//     }
//     return 0;
// }

// // 40 Initialise an array
// #include<stdio.h>
// int main()
// {
//     int a[5] = {1,2,3,4,5};
//     for (int i = 0; i<= 4;i++)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }

// // 41 input a value in array
// #include<stdio.h>
// int main()
// {
//     int i, j;
//     printf("Enter the size of the array: ");
//     scanf("%d",&j);
//     int a[j];
//     for (i = 0;i <j; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for ( i = 0;i < j; i++)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }

// // 42 Reverse an array
// #include<stdio.h>
// int main()
// {
//     int i, j;
//     printf("Enter the size of the array: ");
//     scanf("%d",&j);
//     int a[j];
//     for (i = 0;i <j; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for ( i = j-1;i >= 0; i--)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }

// // 43 Playing with vovel
// #include<stdio.h>
// int main()
// {
//     char a[5] = {'a','e','i','o','u'} , c;
//     printf("Enter a character: ");
//     scanf("%c",&c);
//     if ( c == a[0] || c == a[1] || c == a[2] || c == a[3] || c == a[4])
//     {
//         printf("The character is vovel");
//     }
//     else
//     {
//         printf("The character is consonent");
//     }
//     return 0;
// }

//  // 43 Playing with vovel
//  #include<stdio.h>
//  int main()
//  {
//      char a[5] = {'a','e','i','o','u'} , b[10];
// 	int count = 0, i;
// 	printf("Enter a string");
// 	for ( i = 0; i < 10; i++){
// 	scanf("%c",&b[i]);
//      if ( b[i] == a[0] || b[i] == a[1] || b[i] == a[2] || b[i] == a[3] || b[i] == a[4])
//      {
//          count++;
//      }
//     else
//     {
//         printf("The character is consonent");
//     }

// }
// printf("Total number of vovel's is %d", count);
//      return 0;
//  }

// // 44 Program to check weather the number is even or odd in the array.
// #include <stdio.h>
// int main()
// {
//     int a[5], i;
//     printf("Enter numbers is array: ");
//     for (i = 0; i < 5; i++)
//     {
//         scanf("%d", &a[i]);
//         if (a[i] % 2 == 0)
//         {
//             printf("%dth no is even\n", i);
//         }
//         else
//         {
//             printf("%dth no is odd\n",i);
//         }
//     }
//     return 0;
// }

// // 45 Program to calculate the size of array
// #include <stdio.h>
// int main()
// {
//     int arr[5] = { 1 , 2 , 3 , 4 , 6};
//     int size = sizeof arr / sizeof arr[0];
//     printf("%d", size);
//     return 0;
// }


// // 46 Print 2 D array
// #include <stdio.h>
// int main()
// {
//     int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
//     for ( int i = 0; i < 3; i++)
//     {
//         for ( int j = 0; j < 3; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// //  47 Calculate the sum of all the elements in the 2 D array
// #include <stdio.h>
// int main()
// {
//     int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
//     for ( int i = 0; i < 3; i++)
//     {
//         for ( int j = 0; j < 3; j++)
//         {
//             printf("%d ", arr[i][j] + arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // 48 Print transpose of 2 D matrices
// #include <stdio.h>
// int main()
// {
//     int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
//     for ( int i = 0; i < 3; i++)
//     {
//         for ( int j = 0; j < 3; j++)
//         {
//             printf("%d ", arr[j][i]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // 49 C Program to display the factorial of a no using do-while loop
// #include <stdio.h>
// int main()
// {
//     int num, i = 1, product = 1;
//     printf("Enter a no");
//     scanf("%d",&num);
//     do
//     {
//         product = product* i;
//         i++;
//     } while (i <= num);
//     printf("%d",product);
//     return 0;
// }

// // 50 C program to print the next no
// #include <stdio.h>
// int main()
// {
//     char str[100];
//     int i = 0;
//     printf("Enter a string: ");
//     scanf("%s", str);
//     while (str[i] != '\0')
//     {
//         str[i] = str[i] + 1;
//         i++;
//     }
//     printf("%s", str);
//     return 0;
// }

// // 51 C program to enter and display a string
// #include<stdio.h>
// int main()
// {
//     char str[100];
//     printf("Enter a string: ");
//     scanf("%s", &str);
//     printf("The given string is %s", str);
//     return 0;
// }

// // 52 C program to calculate the length of a string without counting spaces
// #include <stdio.h>
// int main()
// {
//     char str[] = "asdf asdf asdf";
//     int i = 0, count = 0;
//     while (str[i] != 0 )
//     {
//         if (str[i] != ' '  )
//         {
//             count++;
//         }
//         i++;
//     }
//     printf("The length of the string is %d", count);
//     return 0;
// }

// //  53 C program to convert string from lower case to upper case
// #include<stdio.h>
// int main()
// {
//     char str[100];
//     int i = 0;
//     printf("Enter a string\n");
//     scanf("%s", &str);
//     while (str[i] != '\0')
//     {
//         if (str[i] >= 'a' && str[i] <= 'z')
//         {
//             str[i] = str[i] - 32;
//         }
//         i++;
//     }
//     printf("%s",str);
//     return 0;
// }

// // 54 C program to convert string from  lower case to upper case  only at even places
// #include<stdio.h>
// int main()
// {
//     // char str[50] = "asdf asdf asdf";
//     char str[100];
//     printf("Enter a string");
//     gets(str);
//     int i = 0;
//     while ( str[i] != '\0')
//     {
//         if (str[i] != ' ')
//         {
//         str[i] -= 32;
//         }
//         i += 2;
//     }
//     printf("%s",str);

//     return 0;
// }

// 55 C program to search a number in a sorted array

// // Applying linear search
// #include<stdio.h>
// int main()
// {
//     int num, i = 0, arr[] = { 1,2,3,4,5,6,7,8,9};
//     printf("Enter the number you want to search\n");
//     scanf("%d",&num);
//     while (num != arr[i])
//     {
//         if (num != arr[i])
//         {
//             i++;
//         }
//         else
//         {
//             break;
//         }
//     }
//     printf("The no you want is at %d place in the array",i);
//     return 0;
// }

// // Binary Search
// #include <stdio.h>
// int main()
// {
//     int num, i, first, last, middle, n;
//     printf("Enter the size of array\n");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter an array\n");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the number you want to search\n");
//     scanf("%d", &num);
//     first = 0;
//     last = n - 1;
//     middle = ( first + last ) / 2;
//     while (first <= last)
//     {
//         if ( num < arr[middle] )
//         {
//             last = middle - 1;
//         }
//         else if ( num > arr[middle] )
//         {
//             first = middle + 1;
//         }
//         else if ( num == arr[middle])
//         {
//             printf("The demanded no is at %d place",middle);
//             break;
//         }
//         if (first == last)
//         {
//             printf("Not Found!");
//         }
//         middle = ( first + last ) / 2;
//     }
//     return 0;
// }

// // 56 Program to change the 3rd bit of a given no
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter the no you want to change \n");
//     scanf("%d", &num);
//     num = num ^ 8;
//     printf("%d",num);
//     return 0;
// }

// // 57 Write a program to write A to Z except D, J, M, T, Y.
// #include <stdio.h>
// int main()
// {
//     char alphabet = 'A';
//     while ( alphabet <= 'Z')
//     {
//         if ( alphabet != 'D' || alphabet != 'J' || alphabet != 'M' || alphabet != 'T' || alphabet != 'Y' )
//         {
//             printf("%c\n", alphabet);
//         }
//         alphabet++;
//     }
//     return 0;
// }

// // 58 Write a program to solve a! * a ^ b
// #include<stdio.h>
// int main()
// {
//     int ans = 1, a, b ,factorial = 1, i, power = 1;
//     printf("Enter the numbers");
//     scanf("%d%d", &a, &b);
//     for ( i = 1; i <= a; i++)
//     {
//         factorial = factorial * i;
//     }
//     for ( i = 1; i <= b; i++)
//     {
//         power *= a ;
//     }
//     ans = factorial * power;
//     printf("%d" , ans);
//     return 0;
// }

// // 59 Write a program to write A A1 A1C A1C3 A1C3E
// #include <stdio.h>
// int main()
// {
//     int size_of_triangle;
//     printf("Enter the size of the structure\n");
//     scanf("%d", &size_of_triangle);
//     for (int i = 0; i <= size_of_triangle; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             if (j & 1)
//             {
//                 printf("%d", 0 + j);
//             }
//             else
//             {
//                 printf("%c", 'A' + j);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // 60 C program to sort an array with bubble sort
// #include <stdio.h>
// int main()
// {
//     int tem, n, arr[100];
//     printf("Enter the size of the array\n");
//     scanf("%d", &n);
//     printf("Enter the array\n");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 tem = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = tem;
//             }
//         }
//     }
//     printf("Sorted array using bubble sort is :\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\n", arr[i]);
//     }
//     return 0;
// }

// // 61 Print Hello World using functions
// #include <stdio.h>
// void hello();
// int main()
// {
//     hello();
//     return 0;
// }
// void hello()
// {
//     printf("Hello GGV");
// }

// //  62 Finding factorial using functions
// #include<stdio.h>
// int fact();
// int main()
// {
//     int num;
//     printf("Enter a no\n");
//     scanf("%d", &num);
//     fact(num);
//     return 0;
// }

// int fact(int n)
// {
//     int product = 1;
//     for (int i = 1; i <= n; i++ )
//     {
//         product = product * i;
//     }
//     printf("The factorial of %d is %d",n,product);
// }

// // 63 Print sum of 2 numbers using function
// #include <stdio.h>
// float sum(float a,float b);
// int main()
// {
//     float a,b;
//     printf("Enter 2 numbers\n");
//     scanf("%f%f",&a,&b);
//     sum(a,b);
//     return 0;
// }

// float sum(float a,float b)
// {
//     printf("Sum of those no is %0.2f",a+b);
// }

// // 64 Program to display from the entered character to 'Z' using functions
// #include <stdio.h>
// char s(char a);
// int main()
// {
//     char a;
//     printf("Enter a Starting character");
//     scanf("%c", &a);
//     s(a);
//     return 0;
// }

// char s(char a)
// {
//     while (a != 'Z' + 1)
//     {
//         printf("%c\n", a);
//         a++;
//     }
// }

// // 65 Program to calculate area of circle using function
// #include<stdio.h>
// float area(float r);
// int main()
// {
//     float radius;
//     printf("Enter the radius\n");
//     scanf("%f",&radius);
//     // area(radius);
//     printf("The area of the circle is %f", area(radius));
//     return 0;
// }

// float area(float r)
// {
//     float ar;
//     ar = 3.14 * r * r;
//     // printf("\nArea of circle is %f\n",ar);
//     return ar;
// }

// // 66 Program to find the nature and roots of quardatic equation
// #include <stdio.h>
// #include <math.h>
// void nature(int a, int b, int c);
// float root(int a, int b, int c);
// int main()
// {
//     int a, b, c;
//     printf("Enter the a,b,c of the quardatic equation\n");
//     scanf("%d%d%d", &a, &b, &c);
//     root(a, b, c);
//     nature(a, b, c);
//     return 0;
// }

// void nature(int a, int b, int c)
// {
//     float square;
//     square = b * b - 4 * a * c;
//     if (square == 0)
//     {
//         printf("\nOnly one root\n");
//     }
//     else if (square > 0)
//     {
//         printf("\nThere will be 2 roots\n");
//     }
//     else
//     {
//         printf("\nNo real Roots\n");
//     }
// }

// float root(int a, int b, int c)
// {
//     float square, roots[2];
//     square = b * b - 4 * a * c;

//     if (square == 0)
//     {
//         roots[0] = -b / (2 * a);
//         printf("\n%f", roots[0]);
//     }
//     else if (square > 0)
//     {
//         roots[0] = (-b + sqrt(square)) / (2 * a);
//         roots[1] = (-b - sqrt(square)) / (2 * a);
//         printf("%f\n%f", roots[0], roots[1]);
//     }
// }

// // 67 Program to find the sum of n natural no using function
// //  Functions
// #include<stdio.h>
// int sum(int num);
// int main()
// {
//     int num;
//     printf("Enter a number");
//     scanf("%d", &num);
//     sum(num);
//     return 0;
// }
// int sum(int a)
// {
//     int add = 0;
//     for (int i = a; i > 0; i--)
//     {
//         add += i;
//     }
//     printf("The sum of the no is %d",add);
// }

// // Pointers
// #include<stdio.h>
// int main()
// {
//     int num, *p = &num,add=0;
//     printf("Enter a number\n");
//     scanf("%d", &num);
//     for (int i = 0; i <= *p; i++)
//     {
//         add += i;
//     }
//     printf("The sum of the no is %d",add);
//     return 0;

// }

// //  68 Program to swap 2 numbers using pointers
// #include<stdio.h>
// int main()
// {
//     int a, b, *pa = &a, *pb = &b, temp;
//     printf("Enter 2 numbers a & b \n");
//     scanf("%d%d",&a,&b);
//     temp = *pa;
//     *pa = *pb;
//     *pb = temp;
//     printf("The changed value of a is %d and b is %d",*pa,*pb);
//     return 0;
// }

// // 69 C program to display the value of a and b using function (To demonstrate the
// // functioning of local and global variables).
// #include<stdio.h>
// int a = 10, b = 20;
// int global(int a, int b);
// int local();
// int main()
// {
//     global(a,b);
//     local(a,b);
//     return 0;
// }

// int global(int a, int b)
// {
//     printf("\nThe original value is %d and %d\n",a,b);
// }

// int local()
// {
//     int a= 5, b= 7;
//     printf("\nThe local changed value is %d and %d\n",a,b);
// }

// // 70 C program to display (a) 1-D array (b) 2-D array using pointer.
// 1 D array
// #include <stdio.h>
// int main()
// {
//     int array[] = {1, 2, 3, 4, 5, 6, 7, 8}, *ptr = &array[0], i = 0;
//     for ( i = 0; i < 8; i++)
//     {
//         printf("The address of array in integers %u\n", ptr + i);
//         printf("The address of array in hexa decimal %x\n", ptr + i);
//     }
//     return 0;
// }

// // 2 D array
// #include<stdio.h>
// int main()
// {
//     int array[3][3]= {{1,12,3},{4,5,6},{7,18,9}}, *ptr = &array[0][0],i,j;
//     for (i = 0 ; i < 3 *3; i++)
//     {
//         printf("The value of the array are %d\n", *(ptr + i));
//     }
//     return 0;
// }

// // 71 double pointer
// #include<stdio.h>
// int main ()
// {
//  int a[3][3]={{1,2,3},{4,8,9},{2,67,23}};
//   int **p,*ptr;
//   ptr=&a[0][0];
//   p=&ptr;
//   for(int i=0;i<9;i++)
//   {
//     printf("%d\t",*(*p+i));    //here *p is equal to ptr(which acts as p in above program)
//   }
//   return 0;
// }

// // // 72. C program to print the address and the entered integer with their
// //  hexadecimal values
// #include <stdio.h>
// int main()
// {
//     int num, *ptrq = &num;
//     printf("Enter the number: ");
//     scanf("%d", &num);
//     printf("\nThe address of num in hexadecimal is %x", ptrq);
//     printf("\nThe value of num is %d", num);
//     return 0;
// }

// // 73 C program to create a structure which stores and display the name of the player and their Jersey number.
// #include<stdio.h>
// int main()
// {
//     struct player
//     {
//         char name[20];
//         int jersey;
//     };
//     struct player p1 = {"Sachin", 10};
//     struct player p2 = {"Dhoni", 7};
//     printf("The name of the player is %s and the jersey number is %d", p1.name, p1.jersey);
//     printf("\nThe name of the player is %s and the jersey number is %d", p2.name, p2.jersey);
//     return 0;
// }

// // 74. C program to create an array of structures which stores and displays the names Of the player and their jersey number.
// #include<stdio.h>
// int main()
// {
//     struct player
//     {
//         char name[20];
//         int jersey;
//     };
//     struct player p[4] = {{"Sachin", 10},{"Dhoni", 7},{"Virat", 8},{"Rohit", 9}};
//     printf("The name of the player is %s and the jersey number is %d", p[0].name, p[0].jersey);
//     printf("\nThe name of the player is %s and the jersey number is %d", p[1].name, p[1].jersey);
//     return 0;
// }

// // 75 C program to create an alias name of the structure which stores and displays the names Of the players and their jersey number.
// #include<stdio.h>
// int main()
// {
//     typedef struct player{
//         char  name[20];
//         int jersey;
//     }rcb;
//     rcb p[10] = {{"Sachin", 10},{"Dhoni", 7},{"Virat", 8},{"Rohit", 9}};
//     for(int i = 0; i < 4;i++){
//         printf("jersey no. of %s is %d\n",p[i].name,p[i].jersey);
//     }
//     return 0;
// }