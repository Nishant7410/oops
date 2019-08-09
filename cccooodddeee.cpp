#include<iostream>
using namespace std;
class X
{
int a,b;
public:
X(int a,int b)
{
this->a=a;
this->b=b;
}
void largest()
{
if(a>b)
{
//-return *this;
cout<<a;
}
else
{
cout<<b;
}
}

};
int main()
{
int x,y;
cin>>x>>y;
X grt(x,y);
grt.largest();
}
