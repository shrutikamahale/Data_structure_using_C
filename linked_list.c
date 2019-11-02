#include <stdio.h>
struct node 
{
  int data;
  struct node* next;
};
int main() {
  struct node* head = NULL;
  struct node* second = NULL;
  struct node* third = NULL;

  head = (struct node*)malloc(sizeof(struct node));
  second = (struct node*)malloc(sizeof(struct node));
  third = (struct node*)malloc(sizeof(struct node));
  
  head -> data = 1;
  head -> next = second;
  printf("%d", head -> data);

  second -> data = 2;
  second -> next = third;
  printf("%d", second -> data);
  
  third -> data = 3;
  third -> next = NULL;
  printf("%d", third -> data);
  
  return 0;
}