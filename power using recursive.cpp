#include<iostream>
using namespace std;
int m=1;
int power(int a,int b)
{
if(b!=0)
{
return (a*power(a,b-1));
}
else
return 1;
}
int main()
{
int a,b;
cin>>a>>b;
cout<<power(a,b);
return 0;
}
