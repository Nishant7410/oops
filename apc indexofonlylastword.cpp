#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int flag=0;
    int first,last;
    for(int i=0;i<=s.length();i++)
    {
    if(s[i]==32||s[i]=='\0')
    {
        if(flag==1)
           last=i-1;
        flag=0;
    }
    else
    {
    if(flag==0)
    {
       first=i;
    }
    flag=1;
    }
    }
    cout<<first<<" "<<last;
}
