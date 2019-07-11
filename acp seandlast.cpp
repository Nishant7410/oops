#include<iostream>
using namespace std;
int fun(int n,int a)
{
    static int flag=0;
if(n<=99)
{
    if((flag==0)&&(n/10==0))
        return 0;
    else if((flag==0)&&(n/10!=0))
        return n%10;
    else if(flag==1)
        return a;
n=n%10;
return a+n;
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
int a=n%100;
a=a/10;
int c=fun(n,a);
cout<<c;
}
