
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
   int maxdepth(tree *root)
   {
       if(root==NULL)
        return 0;
       else
       {
           int ld=maxdepth(root->left);
           int rd=maxdepth(root->right);
           if(ld>rd)
            return ld+1;
           else
            return rd+1;
       }
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
  cout<<"Max depth"<<endl;
  cout<<maxdepth(root);
}

