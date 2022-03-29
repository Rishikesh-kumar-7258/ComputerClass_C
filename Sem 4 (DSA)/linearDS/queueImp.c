#include <stdio.h>
#include <stdlib.h>

struct Queue{
    int *arr, front, back, size;
};

struct Queue* createQueue(int size)
{
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue)*size);
    q->front = q->back = -1;
    q->size = size;
    q->arr = (int*)malloc(sizeof(int)*q->size);
}

void push(struct Queue *q, int a)
{
    if (q->back == q->size) printf("Overflow");
    else q->arr[q->back++] = a;
}

void pop(struct Queue *q)
{
    if (q->front == q->back) printf("Underflow");
    else q->front++;
}

int front(struct Queue *q)
{
    if (q->front == -1) return -1;
    else return q->arr[q->front];
}

int main()
{
    return 0;
}