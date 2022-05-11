#include <stdio.h>
#include <stdlib.h>

struct Stack{
    int *array;
    int top;
    int arrSize;
};

struct Stack* createStack(int size)
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack)*size);
    stack->arrSize = size;
    stack->top = -1;
    stack->array = (int*)malloc(sizeof(int)*stack->arrSize);
    return stack;
}

int isFull(struct Stack* stack) {return stack->top == stack->arrSize-1;}
int size(struct Stack *stack) {return stack->top + 1;}
int isEmpty(struct Stack* stack) {return stack->top == -1;}

int peek(struct Stack* stack)
{
    if (isEmpty(stack)) 
    {
        printf("Stack underflow\n");
        return -1;
    }
    else return stack->array[stack->top];
}



void push(int a, struct Stack* stack)
{
    if (stack->top == stack->arrSize -1) printf("Stack overflow\n");
    else stack->array[++stack->top] = a;
}

void pop(struct Stack *stack)
{
    if (stack->top == -1) printf("Stack underflow\n");
    else stack->top--;
}


int main()
{
    // printf("%d", *stack);
    struct Stack* stack = createStack(5);
    push(5, stack);
    push(7, stack);
    printf("%d\n", peek(stack));
    pop(stack);
    printf("%d\n", peek(stack));
    pop(stack);
    printf("%d\n", peek(stack));

    return 0;
}