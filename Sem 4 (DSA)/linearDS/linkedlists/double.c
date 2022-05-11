#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int val;
  struct Node *next, *prev;
};

struct Node *createNode(int val)
{
  struct Node *node = (struct Node *)malloc(sizeof(struct Node));
  node->val = val;
  node->next = node->prev = NULL;

  return node;
}

void insertNode(struct Node **head, int pos, int val)
{
  struct Node *toAdd = createNode(val);

  // inserting at head
  if (pos == 1)
  {
    if (*head != NULL)
      (*head)->prev = toAdd;
    toAdd->next = *head;
    *head = toAdd;

    return;
  }

  // inserting in middle
  struct Node *temp = *head;
  for (int i = 1; i < pos - 1 && temp->next != NULL; i++)
    temp = temp->next;

  toAdd->next = temp->next;
  if (temp->next != NULL) temp->next->prev = toAdd;
  temp->next = toAdd;
  toAdd->prev = temp;
}

void deleteNode(struct Node **head, int pos)
{
  if (pos == 1)
  {
    *head = (*head)->next;
    (*head)->prev = NULL;
    return;
  }

  struct Node *temp = *head;
  for (int i = 1; i < pos - 1; i++)
    temp = temp->next;

  temp->next = temp->next->next;
  temp->next->prev = temp;
}

void display(struct Node *head)
{
  struct Node *temp = head;
  while (temp != NULL)
  {
    printf("%d ", temp->val);
    temp = temp->next;
  }
  printf("\n");
}

int main()
{
  struct Node *head = NULL;
  // insertNode(&head, 1, 5);
  // printf("%d\n", head->val);
  // insertNode(&head, 2, 10);
  // printf("%d\n", head->next->val);
  for (int i = 0; i < 5; i++)
    insertNode(&head, i + 1, i + 5);
  printf("Current nodes : ");
  display(head);
  deleteNode(&head, 3);
  printf("Current nodes : ");
  display(head);
  return 0;
}