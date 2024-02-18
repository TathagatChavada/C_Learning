#include <stdio.h>
#include <stdlib.h>

struct node 
{
  int value;
  struct node *next;
};


void insert_At_Beginning(struct node **head ,int new_data)
{
  struct node* new_node = (struct node*)malloc(sizeof(struct node));

  new_node->value = new_data;
  new_node->next = *head;
  *head = new_node;
}


void insert_After(struct node *previous_node ,int new_data)
{
  if (previous_node == NULL)
  {
    printf("Previous Node do not exist");
    return;
  }

  struct node* new_node = (struct node*)malloc(sizeof(struct node));

  new_node->value = new_data;
  new_node->next = previous_node->next;
  previous_node->next = new_node;
}


void insert_At_End(struct node **head ,int new_data)
{
  struct node* new_node = (struct node*)malloc(sizeof(struct node));
  struct node* last = *head;

  new_node->value = new_data;
  new_node->next = NULL;

  if (*head == NULL) {
    *head = new_node;
    return;
  }

  while (last->next != NULL)
  {
    last = last->next;
  } 

  last->next = new_node;
  return;
}


void print_Linked_list(struct node *p) 
{
  printf("Elements of Linked List are:- \n");
  while (p != NULL) {
    printf("%d --> ", p->value);
    p = p->next;
  }
  printf("NULL\n"); 
}


void free_linked_list(struct node *head) 
{
  struct node *current = head;
  struct node *next;

  while (current != NULL) {
    next = current->next;
    free(current);
    current = next;
  }
}


int main() {
  struct node *head = NULL;

  insert_At_Beginning(&head, 1);
  insert_At_End(&head, 2);
  insert_At_End(&head, 3);
  insert_At_End(&head, 4);
  insert_At_End(&head, 5);

  print_Linked_list(head);
  free_linked_list(head);
}