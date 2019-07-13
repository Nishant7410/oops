#include<iostream>
using namespace std;
int fun(int n,int a)
{
   static int flag=0;
if(n<=9)
{
    if(flag==0)
return n;
else
    return n+a;
}
else
{
    flag++;
return fun(n/10,a);
}
}
int main()
{
int n;
cin>>n;
int a=n%10;
int c=fun(n,a);
cout<<c;
}
