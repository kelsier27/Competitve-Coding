#include<bits/stdc++.h>
using namespace std;
struct node
{
  int data;
  struct node *next;
};
void push(struct node **head_ref , int new_element)
{
  struct node *new_node=(struct node *)malloc(sizeof(struct node));

  new_node -> data = element;
  new_node -> *(head_ref);
  
}
int main()
{
  struct node *head = (struct node*)malloc(sizeof(struct node));;
  struct node *second = (struct node*)malloc(sizeof(struct node));
  struct node *third = (struct node*)malloc(sizeof(struct node));

  head -> data = 1;
  head -> next = second;

  second -> data = 2;
  second -> next = third;

  third -> data = 3;
  third -> next = NULL;

  struct node *n = head;
  while(n!=NULL)
  {
    printf("%d\n",n->data);
    n = n->next;
  }

  return 0;

}