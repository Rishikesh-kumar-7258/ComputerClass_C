#include <stdio.h>
#include <stdlib.h>

const int MAX_CHILD = 8;

struct Node{
    int data;
    struct Node** child;
    int childCount;
};

struct Node* createNode(int val)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = val;
    node->childCount = 0;
    node->child = (struct Node**)malloc(sizeof(struct Node*)*MAX_CHILD);
    return node;
}

void addChild(struct Node* parent, struct Node* child)
{
    if (parent->childCount == MAX_CHILD) 
    {
        printf("Size for children is full");
        return;
    }

    parent->child[parent->childCount] = child;
    parent->childCount++;
}



int main()
{
    struct Node* node = createNode(5);
    printf("%d \n", node->childCount);
    struct Node* another = createNode(7);
    addChild(node, another);
    printf("%d \n", node->childCount);
    for (int i = 0; i < node->childCount; i++)
        printf("%d\n", node->child[i]->data);

        
    return 0;
}