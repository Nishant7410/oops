#include<iostream>
#include<string.h>
using namespace std;
int main()
{
string s;
getline(cin,s);
for(int i=0;i<s.length();i++)
{
    int temp=0;
    for(int k=i-1;k>=0;k--)
    {
    if(s[k]==s[i])
    {
        temp=1;
        break;
    }
    }
    if(temp==0)
    {
        int c=1;
        for(int j=i+1;j<s.length();j++)
        {
            if(s[i]!=32)
            if(s[i]==s[j])
                c++;
        }
        if(s[i]!=32)
        cout<<s[i]<<"="<<c<<endl;
        }
}
}
