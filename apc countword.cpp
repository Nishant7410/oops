#include<iostream>
#include<string>
using namespace std;
int main()
{
string s;
getline(cin,s);
int c=0;
int flag=0;
for(int i=0;i<s.length();i++)
{
if(s[i]==32)
{
flag=0;
}
else
{
if(flag==0)
c++;
flag=1;
}
}
cout<<c;
}
