#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node* alternate(struct Node *head,int k)
{
    int c=0;
  struct Node *current=head;
  struct Node *prev=NULL;
  struct Node *next=NULL;
  while(current!=NULL&&c<k)
  {
      next=current->next;
      current->next=prev;
      prev=current;
      current=next;
      c++;
  }
  if(head!=NULL)
    head->next=current;
   c=1;
  while(current!=NULL&&c<k)
  {
    current=current->next;
    c++;
  }
  if(current!=NULL)
    current->next=alternate(current->next,k);
  return prev;
}

