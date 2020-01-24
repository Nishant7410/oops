#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
 void print(struct node* head)
    {
        while(head!=NULL)
        {
            printf("%d ",head->data);
            head=head->next;
        }
    }
struct node* takeinput()
{
    struct node *head=NULL,*tail=NULL;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=i;
    newnode->next=NULL;
    if(head==NULL)
    {
    head=newnode;
    tail=newnode;
    }
    else
    {
        tail->next=newnode;
        tail=tail->next;
    }
    }
    tail->next=head->next->next;
    return head;
    }
void firstnode(struct node* head)
{
    struct node *sptr=head,*fptr=head;
    sptr=sptr->next;
        fptr=fptr->next->next;
    while(sptr!=fptr)
    {
        sptr=sptr->next;
        fptr=fptr->next->next;
      /*  if(sptr==fptr)
        {
            break;
        }*/
    }
    fptr=head;
    while(sptr!=fptr)
    {
        sptr=sptr->next;
        fptr=fptr->next;
    }
    printf("%d",sptr->data);
}
int main()
{
    struct node* head=NULL;
   head=takeinput();
   firstnode(head);
   return 0;
}
