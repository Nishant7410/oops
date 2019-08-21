#include<iostream>
using namespace std;
int flag=0;
bool checkpay(int i,int j,int r[],int c[],int size)
{
    for(int l=0;l<size;l++)
    {
        if(i==r[l]||j==c[l]||(abs(i-r[l])==abs(j-c[l])))
            return false;
    }
    return true;
}
void nqueen(int i,int r[],int c[],int n,int k)
{
 if(i==n)
 {
     flag=1;
    cout<<"[";
    for(int j=0;j<k;j++)
     cout<<c[j]<<" ";
     cout<<"] ";
     return;
 }
 for(int j=0;j<n;j++)
 {
     r[k]=i;
     c[k]=j;
     if(checkpay(i,j,r,c,k))
      nqueen(i+1,r,c,n,k+1);
 }
 return;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    flag=0;
    int n;
    cin>>n;
    int r[n],c[n];
    nqueen(0,r,c,n,0);
    if(flag==0)
        cout<<"-1";
    cout<<endl;
    }
}
