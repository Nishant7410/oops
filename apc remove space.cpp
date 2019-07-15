#include<iostream>
using namespace std;
int main()
{
string s;
string s1;
int k=-1;
int first,last=0;
getline(cin,s);
int flag=0;
for(int i=0;i<=s.length();i++)
{
if(s[i]==32||s[i]=='\0')
{
if(flag==1)
{
last=i-1;
for(int j=first;j<=last;j++)
s1[++k]=s[j];
s1[++k]=' ';
}
flag=0;
}
else
{
if(flag==0)
{
first=i;
flag=1;
}
}
}
for(int j=0;j<k;j++)
    cout<<s1[j];
}
