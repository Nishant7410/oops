#include<iostream>
using namespace std;
int main()
{
string s;
getline(cin,s);
string word;
int ar[s.length()];
int k=-1;
cin>>word;
int flag=0;
int first=0,last=0;
int flag1;
for(int i=0;i<=s.length();i++)
{
if(s[i]==32||s[i]=='\0')
{
if(flag==1)
{flag1=0;
last=i-1;
{
    if(((last-first)+1)==word.length())
    {int pos=first;
    for(int j=0;j<word.length();j++)
    {
        if(word[j]!=s[pos])
        flag1=1;
        pos++;
    }
    if(flag1==0)
        ar[++k]=1;
    }
}
}
flag=0;
}
else
{
    if(flag==0)
    first=i;
    flag=1;
}
}
int flag2=0;
for(int i=0;i<=k;i++)
    if(ar[i]==1)
    flag2=1;
if(flag2==1)
    cout<<"yes";
else
    cout<<"No";

}
