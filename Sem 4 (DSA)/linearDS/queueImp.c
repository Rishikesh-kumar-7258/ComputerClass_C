#include <stdio.h>
#include <stdlib.h>

struct Queue{
    int *arr, front, back, currLen;
};

struct Queue* createQueue()
{
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue)*1);
    q->front = q->back = -1;
    q->currLen = 1;
    q->arr = (int*)malloc(sizeof(int)*q->currLen);
}

void doubleSize(struct Queue* q)
{
    
}

int main()
{
    return 0;
}