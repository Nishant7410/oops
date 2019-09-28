#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    char store[100][100];
    int k=-1;
    int alpha[26]={0};
    char ch;
    for(int i=0;i<str.length();i++)
        alpha[str[i]-97]++;
        for(int i=0;i<26;i++)
            if(alpha[i]>=1)
        {
             ch=(char)i+97;
             break;
        }
        cout<<ch;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==ch)
        {
           char temp[100];
           int k1=-1;
           for(int j=i;j<str.length();j++)
            temp[++k1]=str[j];
           for(int j=0;j<=i-1;j++)
            temp[++k1]=str[j];
            temp[++k1]='\0';
           strcpy(store[++k],temp);
        }
    }
    for(int i=0;i<k;i++)
        for(int j=i+1;j<=k;j++)
        if(strcmp(store[i],store[j])>0)
    {
        char temp[100];
        strcpy(temp,store[i]);
        strcpy(store[i],store[j]);
        strcpy(store[j],temp);
    }
    cout<<endl<<store[0];
}
