#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int val;
  struct Node *next;
};

struct Node *createNode(int val)
{
  struct Node *node = (struct Node *)malloc(sizeof(struct Node));
  node->val = val;
  node->next = NULL;

  return node;
}

void insertNode(struct Node** head, int pos, int val)
{
  struct Node* toAdd = createNode(val);

  // inserting at head;
  if (pos == 1)
  {
    toAdd->next = *head;
    *head = toAdd;
    return;
  }

  // insertion in between
  struct Node* temp = *head;
  for (int i = 0; i < pos-1 && temp->next != NULL; i++)
    temp = temp->next;

  toAdd->next = temp->next;
  temp->next = toAdd;
}

void deleteNode(struct Node** head, int pos)
{
  if (pos == 1)
  {
    *head = (*head)->next;
    return;
  }

  struct Node* temp = *head;
  for (int i = 1; i < pos-1; i++)
    temp = temp->next;

  temp->next = temp->next->next;
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

struct Node* reverse(struct Node* head)
{
  if (head == NULL || head->next == NULL)
    return head;

  struct Node* ans = reverse(head->next), *temp = ans;

  while (temp->next != NULL)
    temp = temp->next;
  
  temp->next = head;
  head->next = NULL;

  return ans;
}

void sort(struct Node ** head)
{
  if (*head == NULL || (*head)->next == NULL) return;

  struct Node * temp = *head, *temp2, *smallest;
  while (temp->next != NULL)
  {
    temp2 = temp->next;
    smallest = temp;
    while (temp2 != NULL)
    {
      if (smallest->val > temp2->val) smallest = temp2;
      temp2 = temp2->next;
    }

    int t = temp->val;
    temp->val = smallest->val;
    smallest->val = t;

    temp = temp->next;
  }
}

int main()
{
  struct Node* head = NULL;
  for (int i = 0; i < 5; i++)
    insertNode(&head, i+1, i+5);
  printf("Current nodes : ");
  display(head);
  printf("After reversing: ");
  head = reverse(head);
  display(head);
  printf("After sorting : ");
  sort(&head);
  display(head);


  deleteNode(&head, 3);
  printf("Current nodes : ");
  display(head);
  return 0;
}