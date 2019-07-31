#include<iostream>

using namespace std;

class sam
{
    int n;
public:
sam(int nn)
{n=nn;}
int f1();};
int sam::f1()
{
static int s=0;
int d;
d=n%10;
n=n/10;
cout<<n<<"before if"<<endl;
if(n/100)
{
f1();
//cout<<d<<" d";
}
cout<<n<<endl;
s=s*10+d;
return s;
}
int main()
{
sam s(12345);
cout<<s.f1();
return 0;

}
