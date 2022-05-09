#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int *arr, front, back, size;
};

struct Queue *createQueue(int size)
{
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->front = q->back = 0;
    q->size = size;
    q->arr = (int *)malloc(sizeof(int) * q->size);
}

int isEmpty(struct Queue *q)
{
    return (q->front == q->back ? 1 : 0);
}

void Enqueue(struct Queue *q, int a)
{
    if (q->back == q->size)
        printf("Overflow\n");
    else
        q->arr[q->back++] = a;
}

void Dequeue(struct Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue underflow\n");
        return;
    }

    q->front++;
}

int front(struct Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
        return -1;
    }

    return q->arr[q->front];
}

int main()
{
    struct Queue *q = createQueue(5);

    if (isEmpty(q) == 1)
        printf("Queue is empty\n");
    else
        printf("Queue is not empty\n");

    Enqueue(q, 10);
    Enqueue(q, 5);

    printf("%d\n", front(q));

    Dequeue(q);
    printf("%d\n", front(q));

    return 0;
}