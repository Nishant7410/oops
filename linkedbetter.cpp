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
Node* insert(Node *head,int i,int data)
{
    Node *newnode=new Node(data);
    if(i==0)
    {
    newnode->next=head;
    head=newnode;
        return head;
    }
    else{
        int c=0;
        Node *temp=head;
        while(c<i-1&&temp!=NULL)
        {
            temp=temp->next;
            c++;
        }
        if(temp!=NULL)
        {
            Node *w=temp->next;
            temp->next=newnode;
            newnode->next=w;
        }
    }
    return head;
}
int main()
{
Node *head=takeninput();
int i,data;
cin>>i>>data;
head=insert(head,i,data);
print(head);
}
