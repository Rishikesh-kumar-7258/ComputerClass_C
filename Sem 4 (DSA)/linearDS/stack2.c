#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size, curr;
    int *arr;
};

struct Stack *createStack(int n)
{
    struct Stack *st = (struct Stack *)malloc(sizeof(struct Stack));
    st->size = n;
    st->curr = 0;
    st->arr = (int *)malloc(sizeof(int) * n);

    return st;
}

void push(struct Stack *st, int val)
{
    if (st->curr >= st->size)
    {
        printf("Stack overflow\n");
        return;
    }

    st->arr[st->curr++] = val;
}

void pop(struct Stack *st)
{
    if (isEmpty(st) == 1)
    {
        printf("Stack underflow\n");
        return;
    }

    st->curr--;
}

int top(struct Stack *st)
{
    if (isEmpty(st) == 1)
    {
        printf("stack is empty\n");
        return -1;
    }

    return st->arr[st->curr-1];
}

int isEmpty(struct Stack *st)
{
    return (st->curr == 0 ? 1 : 0);
}

int main()
{
    struct Stack *st = createStack(5);

    int temp = isEmpty(st);
    if (temp == 1) printf("Stack is empty\n");
    else printf("Stack is not empty\n");

    push(st, 10);
    push(st, 5);

    printf("%d\n", top(st));

    pop(st);
    printf("%d\n", top(st));

    return 0;
}