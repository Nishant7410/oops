#include<iostream>
using namespace std;
int fun(int n,int sum)
{
if(n<=9)
return n+sum;
else
{
sum=sum+(n%10);
return fun(n/10,sum);
}
}
int main()
{
int n;
cin>>n;
int sum=0;
int c=fun(n,sum);
cout<<c;
}
