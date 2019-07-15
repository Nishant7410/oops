#include<iostream>
using namespace std;
int pow(int b,int p)
{
if(p==0)
return 1;
else if(p==1)
{
return b;
}
else
{
if(p%2==0)
{
int a=b*b;
return pow(a,p/2);
}
else
{
int a=b*b*b;
return pow(a,p/2);
}
}
}
int main()
{
int b,p;
cin>>b>>p;
int c=pow(b,p);
cout<<c;
}
