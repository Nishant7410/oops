#include<iostream>
using namespace std;
void fun(int ar[100][100],int i,int j,int n)
{
    if(i<0||j<0||i>=n||j>=n)
        return;
    else if(i==n-1&&j==n-1&&ar[i][j]==1)
    {
        return;
    }
    else if(ar[i][j]==0||ar[i][j]==-1)
        return;
    ar[i][j]=-1;
    fun(ar,i,j+1,n);
    fun(ar,i+1,j,n);
    fun(ar,i-1,j,n);
    fun(ar,i,j-1,n);
    ar[i][j]=1;
}
int main()
{
    int n;
    cin>>n;
    int ar[n][n];
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    cin>>ar[i][j];
    fun(ar,0,0,n);
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<n;j++)
    cout<<ar[i][j]<<" ";
    cout<<endl;
    }
}
