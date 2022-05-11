#include <stdio.h>
#include <stdlib.h>

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
    int n = 1;
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

int search(struct Node* head, int val)
{
    int curr = 0;

    if (head == NULL) return -1;

    struct Node* temp = head;

    while (temp != NULL)
    {
        if (temp->val == val) return curr;

        temp = temp->next;
        curr++;
    }

    return -1;
}

void display(struct Node* head)
{
    struct Node* temp = head;

    while (temp != NULL)
    {
        printf("%d ", temp->val);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    struct Node* head = create(0);
    for (int i = 0; i < 5; i++)
        insert(head, i+1, i+1);
    
    display(head);
    return 0;
}

// function to reverse a linked list
// Iterative method
// struct Node *reverse(struct Node *head)
// {
//     if (!head || !head->next)
//         return head;

//     struct Node *prev, *curr, *next;
//     prev = NULL;
//     curr = head;
//     next = head->next;

//     while (curr)
//     {
//         curr->next = prev;

//         curr = next;
//         next = next->next;
//     }

//     return prev;
// }

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