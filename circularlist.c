#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
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
    tail->next=head;
    return head;
    }
    void print(struct node* head)
    {
        while(head!=NULL)
        {
            printf("%d ",head->data);
            head=head->next;
        }
    }
int checkcircular(struct node* head)
{
    if(head==NULL)
        return 1;

    struct node* temp=head->next;
    while(temp!=NULL && temp!=head)
    {
        temp=temp->next;
    }
    return (temp==head);
}
int main()
{
    struct node* head=NULL;
   head=takeinput();
   print(head);
   if(checkcircular(head))
   {
       printf("circular");
   }
   else
   {
       printf("not");
   }
   return 0;
}
