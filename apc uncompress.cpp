#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
char ch[30];
cin>>ch;
int k=-1;
char temp;
int t;
int sum=0;
char flag=ch[strlen(ch)-2];
for(int i=0;i<strlen(ch);i++)
{
if(ch[i]>='0'&&ch[i]<='9')
{
t=ch[i]-'0';
sum=sum*10+t;
int count=(int)log10(sum)+1;
if(ch[i+1]>='0'&&ch[i+1]<='9')
    continue;
for(int j=0;j<sum-(count+1);j++)
{int count3=strlen(ch);
char temp1=ch[count3];
int count1=strlen(ch);
for(int p=count1;p>i+1;p--)
ch[p]=ch[p-1];
ch[count3+1]=temp1;
i++;
}

    for(int p=0;p<sum-1;p++)
    ch[++k]=temp;
    //if(ch[i]==flag)
      //  ch[k+1]='\0';

sum=0;
}
else
{
//i=i+(sum-(count+1)
    temp=ch[i];
ch[++k]=ch[i];
}
}
ch[++k]='\0';
cout<<ch;
}
