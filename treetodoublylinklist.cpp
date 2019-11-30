#include<iostream>
#include<map>
#include<stack>
#include<queue>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};

void formBSTtree(struct Node* &root,struct Node *temp)
    {
      if(root==NULL)
      {
          root=temp;
          temp->right=NULL;
          temp->left=NULL;
          return;
      }
         else if(temp->data>root->data)
          {
            if(root->right==NULL)
                root->right=temp;
            else
              formBSTtree(root->right,temp);
          }
          else
          {
            if(root->left==NULL)
                root->left=temp;
            else
              formBSTtree(root->left,temp);
          }
    }

void treetodoubly(struct Node *root,struct Node **head)
{
    if(root==NULL)
        return;
  static  struct Node *prev=NULL;
    treetodoubly(root->left,head);
    if(prev==NULL)
        *head=root;
    else
    {
        root->left=prev;
        prev->right=root;
    }
    prev=root;
    treetodoubly(root->right,head);

}
void printdoubly(struct Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->right;
    }
}
int main()
{
    Node *root=NULL;
    while(1)
    {
        int n;
        cin>>n;
        if(n==-1)
            break;
        else{
           struct Node *temp=new struct Node(n);
            formBSTtree(root,temp);
        }
    }
    struct Node *head=NULL;
    treetodoubly(root,&head);
    printdoubly(head);
}
