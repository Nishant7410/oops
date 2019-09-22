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
struct Node* createtree(struct Node *root,int a[],int i,int n)
{
    if(i<n)
    {
       struct Node *temp=new struct Node(a[i]);
       root=temp;
       root->left=createtree(root->left,a,2*i+1,n);
       root->right=createtree(root->right,a,2*i+2,n);
    }
    return root;
}
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
void printInOrderIteratively(struct Node *root)
{
    if(root==NULL)
        return;
    stack<struct Node*>s;
    struct Node *temp=root;
    while(!s.empty()||temp!=NULL)
    {
        while(temp)
        {
            s.push(temp);
            temp=temp->left;
        }
        temp=s.top();
        s.pop();
        cout<<temp->data<<" ";
        temp=temp->right;
    }
}
void printPreOrderIteratively(struct Node *root)
{
    if(root==NULL)
        return;
    stack<struct Node*>s;
    s.push(root);
    while(!s.empty())
    {
        struct Node *temp=s.top();
        s.pop();
        cout<<temp->data<<" ";
        if(temp->right)
        s.push(temp->right);
        if(temp->left)
        s.push(temp->left);
    }
}
void printPostOrderIteratively(struct Node *root)
{
    if(root==NULL)
        return;
    stack<struct Node*>s1,s2;
    s1.push(root);
    while(!s1.empty())
    {
        struct Node *temp=s1.top();
        s1.pop();
        s2.push(temp);
        if(temp->left)
            s1.push(temp->left);
        if(temp->right)
            s1.push(temp->right);
    }
    while(!s2.empty())
    {

        cout<<s2.top()<<" ";
        s2.pop();
    }
}
void printlevel(struct Node *root)
{
    if(root==NULL)
        return;
     queue<struct Node*>q;
     struct Node *temp=root;
    while(temp)
    {
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
        cout<<temp->data<<" ";
        temp=q.front();
        q.pop();
    }
}
void printReverseLevel(struct Node *root)
{
    if(root==NULL)
        return;
    queue<struct Node*>q;
    stack<struct Node*>s;
    q.push(root);
    while(!q.empty())
    {
        struct Node *temp=q.front();
        q.pop();
        s.push(temp);
        if(temp->right)
            q.push(temp->right);
        if(temp->left)
            q.push(temp->left);
    }
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
void printspirally(struct Node *root)
{
    if(root==NULL)
        return;
    int ltr=1;
    stack<struct Node*>s;
    queue<struct Node*>q;
    q.push(root);
    while(!q.empty())
    {
        int size=q.size();
        while(size--)
        {
            struct Node *temp=q.front();
            q.pop();
            if(ltr)
                s.push(temp);
            else
                cout<<temp->data<<" ";
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
        if(ltr)
        {
            while(!s.empty())
            {
                cout<<s.top()<<" ";
                s.pop();
            }

        }
        ltr=!ltr;
    }
}
void leveltree(struct Node *root,int d,map<int,vector<int>> &m)
{
    if(root==NULL)
        return;
     m[d].push_back(root->data);
    leveltree(root->left,d-1,m);
    leveltree(root->right,d+1,m);
}
void printVertical(struct Node *root)
{
    map<int,vector<int>>m;
    int hd=0;
    leveltree(root,hd,m);
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<"->";
        for(int i=0;i<it->second.size();i++)
        {
            cout<<it->second[i];
            if(i!=it->second.size()-1)
                cout<<",";
        }
        cout<<endl;
    }
}
void printBottomView(struct Node *root)
{
    map<int,vector<int>>m;
    int hd=0;
    leveltree(root,hd,m);
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->second[it->second.size()-1]<<" ";
    }
}
void printTopView(struct Node *root)
{
    map<int,vector<int>>m;
    int hd=0;
    leveltree(root,hd,m);
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->second[0]<<" ";
    }
}
void treetodoubly(struct Node *root,struct Node **head)
{
    if(root==NULL)
        return;
    treetodoubly(root->right,head);
    root->right=*head;
    if(*head!=NULL)
    {
        (*head)->left=root;
    }
    *head=root;
    treetodoubly(root->left,head);
}
void printdoubly(struct Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
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
            formBSTtree(root,tamp);
        }
    }
    struct Node *head=NULL;
    treetodoubly(root,&head);
    printdoubly(head);
}
