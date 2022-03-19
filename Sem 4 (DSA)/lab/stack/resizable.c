#include <stdio.h>
#include <stdlib.h>

struct Vector{
    int *arr, currSize, top;
};

struct Vector* createVector()
{
    struct Vector* vec = (struct Vector*)malloc(sizeof(struct Vector)*1);
    vec->currSize = 1;
    vec->top = -1;
    vec->arr = (int*)malloc(sizeof(int)*vec->currSize);

    return vec;
}

void doubleSize(struct Vector* vec)
{
    int *arr = vec->arr;

    vec->currSize *= 2;
    vec = (struct Vector*)malloc(sizeof(struct Vector)*vec->currSize);
    vec->currSize = vec->currSize;
    vec->top = -1;
    vec->arr = (int*)malloc(sizeof(int)*vec->currSize);

    for (int i = 0; i < vec->currSize / 2; i++)
        vec->arr[i] = arr[i];

}

void push_back(int a, struct Vector* vec)
{
    if (vec->top == vec->currSize-1) doubleSize(vec);

    vec->arr[++vec->top] = a;
}

int size(struct Vector* vec) {return vec->top+1;}

int getAt(int i, struct Vector* vec)
{
    return vec->arr[i];
}

int main()
{
    struct Vector* vec = createVector();
    
    for (int i = 0; i < 5; i++) push_back(i+1, vec);

    for (int i = 0; i < size(vec); i++) printf("%d ", getAt(i, vec));
    printf("\n");

    return 0;
}