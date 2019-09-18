#include<vector>
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
  vector<int> maxRoute(tree *root){
      if(root == NULL){
            vector<int> v;
        return v;
      }
       vector<int> v2 = maxRoute(root->right);
      vector<int> v1 = maxRoute(root->left);

      int val1=0, val2=0;
      if(v1.size()!=0){
        val1 = v1[v1.size()-1];
        v1.pop_back();
      }
      if(v2.size()!=0){
        val2 = v2[v2.size()-1];
        v2.pop_back();
      }
      if(val1 >= val2){
        v1.push_back(root->data);
        cout<<"debug "<<root->data<<" "<<val1+root->data<<endl;
        v1.push_back(val1+root->data);
        return v1;
      }
      else{
        v2.push_back(root->data);
        cout<<"debug "<<root->data<<" "<<val2+root->data<<endl;
        v2.push_back(val2+root->data);
        return v2;
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
  vector<int> v = maxRoute(root);
  v.pop_back();
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
  }
}

