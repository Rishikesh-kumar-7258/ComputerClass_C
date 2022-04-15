#include <stdio.h>

struct Node
{
    int val;
    struct Node *next;
};

struct Node *create(int val)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->val = val;
    node->next = NULL;

    return node;
}

void insert(struct Node *head, int pos, int val)
{
    struct Node *toAdd = create(val);

    if (pos < 1)
        return;

    if (pos == 1)
    {
        toAdd->next = head;
        head = toAdd;

        return;
    }

    struct Node *temp = head;
    int n = 0;
    while (temp)
    {
        n++;
        temp = temp->next;
    }

    if (pos > n)
        return;
    temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }

    toAdd->next = temp->next;
    temp->next = toAdd;
}

void deleteNode(struct Node *head, int pos)
{
    if (pos < 1) return;

    if (pos == 1) 
    {
        head = head->next;
        return;
    }

    struct Node *temp = head;
    int n = 0;
    while (temp)
    {
        n++;
        temp = temp->next;
    }

    if (pos > n)
        return;

    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }

    temp->next = temp->next->next;

}

int main()
{
    return 0;
}

// function to reverse a linked list
// Iterative method
struct Node *reverse(struct Node *head)
{
    if (!head || !head->next)
        return head;

    struct Node *prev, *curr, *next;
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
struct Node *reverse(struct Node *head)
{
    if (!head || !head->next)
        return head;

    struct Node *ans = reverse(head->next), *temp = ans;

    while (temp->next)
        temp = temp->next;

    temp->next = head;
    return ans;
}