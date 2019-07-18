#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char ch[35];
cin.getline(ch,35);
int c=0;
int flag=0;
int k=-1;
for(int i=0;i<strlen(ch);i++)
{
if(ch[i]==32)
{
flag=0;
}
else
{
if(flag==0)
{
c++;
flag=1;
}
}
}
int p=0;
int first=0,last=0;
flag=0;
for(int i=0;i<strlen(ch);i++)
{
if(ch[i]==32||ch[i+1]=='\0')
{
if(flag==1)
{
    p++;
    if(ch[i]==32)
    last=i-1;
    else
        last=i;
    if(p==c)
    {
        for(int j=first;j<=last;j++)
            ch[++k]=ch[j];
    }
    else{
        ch[++k]=ch[first];
        ch[++k]='.';
    }
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
ch[++k]='\0';
cout<<ch;
}
