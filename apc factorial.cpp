#include<iostream>
using namespace std;
int fun(int n,int p)
{
if(n==0)
return p;
else
{
    p=p*n;
return fun(n-1,p);
}
}
int main()
{
int n;
cin>>n;
int p=1;
int c=fun(n,p);
    cout<<c;
}
