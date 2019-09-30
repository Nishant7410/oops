#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int n;
    cin>>n;
    int c=0,num=0;
    for(int i=0;i<str.length();i++)
    {
        num=num*10+(str[i]-48);
        if(num<=n&&i!=0)
        {
            continue;
        }
        else{
            if(str[i]-48<=n)
                c++;
            num=str[i]-48;
        }
    }
    cout<<c;
}
