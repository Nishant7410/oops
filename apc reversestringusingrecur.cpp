#include<iostream>
using namespace std;
void fun(char *s,int i,int j)
{
    static int k=0;
if(s[j]=='\0')
{
k=i;
return;
}
else if(s[j+1]=='\0')
{
    k=i+1;
    return;
}
else
{
fun(s,i+1,j+2);
char temp;
temp=s[i];
s[i]=s[k];
s[k]=temp;
k++;
return;
}
}
int main()
{
char s[20];
cin>>s;
fun(s,0,0);
cout<<s;
}
