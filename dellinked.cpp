#include<iostream>
using namespace std;
class Node
{
public:
int a;
Node *next;
Node(int n)
{
a=n;
}
};
Node* takeninput()
{
int data;
Node *head=NULL;
cin>>data;
while(data!=-1)
{
Node *newnode=new Node(data);
if(head==NULL)
head=newnode;
else
{
Node *temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=newnode;
}
cin>>data;
}
return head;
}
void print(Node *head)
{
while(head!=NULL)
{
cout<<head->a<<" ";
head=head->next;
}
}
Node* delete(Node *head,int i)
{
if(i==0)
{
head=head->next;
return head;
}
else
{
int c=0;
Node *temp=head;
while(c<i-1&&temp->next!=NULL)
{
temp=temp->next;
c++;
}
if(temp->next!=NULL)
{
Node *q=temp->next;
if(q->next==NULL)
{
temp->next=NULL;
return head;
}
else
{
Node *p=temp->next;
Node *l=p->next;
temp->next=l;
return head;
}
}
}
return head;
}
int main()
{
Node *head=takeninput();
int i,data;
cin>>i;
head=delete(head,i);
print(head);
}
