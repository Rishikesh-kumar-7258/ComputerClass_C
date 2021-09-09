#include<stdio.h>

#include<stdlib.h>

#include <string.h>



int main(void)
{

int maxtineCount 500, maxCharCount = 500, index, j, count;
char *line = NULL;

size t size;

char a[maxLineCount];

for (index = 0; index < maxLineCount; index++) a[index] (char *)malloc(maxCharCount = sizeof(char));

int nooftine = 0;

// read the input as line

while(getline(&line, &size, stdin) != -1)
{
    strcpy(a[nooftine++], line);
}
for (index = 0; index < nooftine; index++)

printf("%s", a[index]); return 0;
}