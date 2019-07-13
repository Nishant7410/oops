#include<iostream>
#include<math.h>
using namespace std;
int fun(int n,int sum)
{
static int c=4;
static int i=0;
if(n==0)
return sum;
else
{
    int s=pow(10,c-1);
sum=sum+(n/s)*pow(10,i);
i++;
c--;
cout<<sum<<endl;
return fun(n%s,sum);
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
