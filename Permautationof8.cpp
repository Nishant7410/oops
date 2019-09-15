#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int permautation(string str)
{
    if(str.length()<3)
    {
        if(atoi(str.c_str())%8==0)
            return 1;
        reverse(str.begin(),str.end());
        if(atoi(str.c_str())%8==0)
            return 1;
        return 0;
    }
        int h[10]={0};
        for(int i=0;i<str.length();i++)
            h[str[i]-'0']++;
        for(int i=104;i<1000;i=i+8)
        {

            int dp=i;
            int f[10]={0};
            f[dp%10]++;
            dp=dp/10;
            f[dp%10]++;
            dp=dp/10;
            f[dp%10]++;
            dp=i;
            if(f[dp%10]>h[dp%10])
                continue;
                dp=dp/10;
            if(f[dp%10]>h[dp%10])
                continue;
                dp=dp/10;
            if(f[dp%10]>h[dp%10])
              continue;
              return 1;
        }
    return 0;
}
int main()
{
    string str;
     cin>>str;
     if(permautation(str))
        cout<<"yes";
     else
        cout<<"No";
}

