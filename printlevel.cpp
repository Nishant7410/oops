#include<queue>
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
 /*void printlevel(tree *root)
 {
     if(root==NULL)
        return;
        else{
                if(root->left!=NULL && root->right!=NULL){
                    cout<<root->left->data<<" ";
                    cout<<root->right->data<<endl;
                }
                else if(root->left!=NULL){
                    cout<<root->left->data<<endl;
                }
                else if(root->right!=NULL){
                    cout<<root->right->data<<endl;
                }
            printlevel(root->left);
            printlevel(root->right);
        }

 }*/
 int height(tree *root)
 {
     if(root==NULL)
        return 0;
     int ld=height(root->left);
     int rd=height(root->right);
     if(ld>rd)
        return ld+1;
     else
        return rd+1;
 }
 void printgivenlevel(tree *root,int l)
 {
     if(root==NULL)
        return;
     if(l==1)
        cout<<root->data<<" ";
     else if(l>1)
     {
         printgivenlevel(root->left,l-1);
         printgivenlevel(root->right,l-1);
     }
 }
 void printlevel(tree *root)
 {
     int h=height(root);
     for(int i=1;i<=h;i++)
        printgivenlevel(root,i);
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
    printlevel(root);
}

