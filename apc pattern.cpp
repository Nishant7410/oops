#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int x;
for(int i=1;i<=n;i++)
{
for(int j=65;j<=(n+65)-i;j++)
cout<<char(j);
for(int k=1;k<=(2*i)-3;k++)
cout<<" ";
if(i==1)
x=(n+63);
else
x=(n+65)-i;
for(int l=x;l>=65;l--)
cout<<char(l);
cout<<endl;
}
}
