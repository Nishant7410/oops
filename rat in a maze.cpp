#include<iostream>
using namespace std;
void fun(int ar[100][100],int i,int j,int n,char *ch,int k)
{
    if(i<0||j<0||i>=n||j>=n)
        return;
    else if(i==n-1&&j==n-1&&ar[i][j]==1)
    {
        ch[k]='\0';
        cout<<ch;
        return;
    }
    else if(ar[i][j]==0||ar[i][j]==-1)
        return;
    ar[i][j]=-1;
    ch[k]='R';
    fun(ar,i,j+1,n,ch,k+1);
    ch[k]='D';
    fun(ar,i+1,j,n,ch,k+1);
    ch[k]='L';
    fun(ar,i,j-1,n,ch,k+1);
    ch[k]='U';
    fun(ar,i-1,j,n,ch,k+1);
    ar[i][j]=1;
}
int main()
{
    int n;
    cin>>n;
    int ar[100][100];
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    cin>>ar[i][j];
    char *ch=new char[n+n];
    fun(ar,0,0,n,ch,0);
    //cout<<ch;
}
