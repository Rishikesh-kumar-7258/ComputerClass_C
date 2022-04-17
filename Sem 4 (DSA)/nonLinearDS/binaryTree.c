#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* left, *right;
};

struct Node* createNode(int val)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = val;
    node->left = node->right = NULL;

    return node;
}

void addChildLeft(struct Node* parent, struct Node* child)
{
    parent->left = child;
}

void addChildRight(struct Node* parent, struct Node* child)
{
    parent->right = child;
}

// Binary tree Traversing alogorithms
// 1. preorder
void PreOrder(struct Node* root)
{
    if (!root) return;

    printf("%d ", root->data);

    PreOrder(root->left);
    PreOrder(root->right);
}

// 2. Inorder
void InOrder(struct Node* root)
{
    if (!root) return ;

    InOrder(root->left);
    printf("%d ", root->data);
    InOrder(root->right);
}

// 3. Postorder
void PostOrder(struct Node* root)
{
    if (!root) return ;

    PostOrder(root->left);
    PostOrder(root->right);
    printf("%d ", root->data);
}

// step wise left to right traversal
void LeftToRight(struct Node* root)
{
    
}

int main()
{
    return 0;
}