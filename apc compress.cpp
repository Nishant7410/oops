#include<iostream>
#include<string.h>
using namespace std;
int main()
{
/*char s[30];
cin>>s;
int c=49;
int k=-1;
int length=strlen(s);
for(int i=0;i<strlen(s);i++)
{
if(s[i]!=s[i+1])
{
    if(s[i]==32)
        continue;
s[++k]=s[i];
if(c==49)
{
int count=strlen(s);
char temp=s[count];
for(int p=count;p>i;p--)
s[p]=s[p-1];
s[count+1]=temp;
i++;
}
s[++k]=(char)c;
c=49;
}
else if(s[i]!=32)
{
c++;
}
}
s[++k]='\0';
/*for(int i=0;i<=k;i++)*/
string s;
cin>>s;
char ch[]="jsh";
s+=ch;
cout<<s;
}
