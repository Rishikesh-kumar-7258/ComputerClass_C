#include <stdio.h>

struct Node{
    int val;
    struct Node* next;
};

struct Node* create(int val)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->val = val;
    node->next = NULL;

    return node;
}

int main()
{
    return 0;
}

// function to reverse a linked list
// Iterative method
struct Node* reverse(struct Node* head)
{
    if (!head || !head->next) return head;

    struct Node* prev, *curr, *next;
    prev = NULL;
    curr = head;
    next = head->next;

    while (curr)
    {
        curr->next = prev;

        curr = next;
        next = next->next;
    }

    return prev;
}

// Recursive method
struct Node* reverse(struct Node* head)
{
    if (!head || !head->next) return head;

    struct Node* ans = reverse(head->next), *temp = ans;

    while (temp->next)
        temp = temp->next;

    temp->next = head;
    return ans;
}