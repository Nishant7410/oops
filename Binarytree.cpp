#include<iostream>
using namespace std;
struct tree
{
    int data;
    tree *left;
    tree *right;
};
void insert(tree* &root,tree *temp)
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
              insert(root->right,temp);
          }
          else
          {
            if(root->left==NULL)
                root->left=temp;
            else
              insert(root->left,temp);
          }
    }
    void inorder(tree *root)
    {
        if(root==NULL)
            return;
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
    void preorder(tree *root)
    {
       if(root==NULL)
            return;
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
    void postorder(tree *root)
    {

        if(root==NULL)
            return;
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
int main()
{
    tree *root=NULL;
    while(1)
    {
        int n;
        cin>>n;
        if(n==-1)
            break;
        else
        {
           tree *temp=new tree();
           temp->data=n;
            insert(root,temp);
        }
    }
  cout<<"Inorder"<<endl;
  inorder(root);
  cout<<endl<<"Preorder"<<endl;
  preorder(root);
  cout<<endl<<"Postorder"<<endl;
  postorder(root);
}

