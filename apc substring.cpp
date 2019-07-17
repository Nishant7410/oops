#include<iostream>
using namespace std;
int main()
{
string s;
getline(cin,s);
int n,m;
cin>>n>>m;
int st=n;
while((n<(st+m))&&(s[n-1]!=NULL))
{
cout<<s[n-1];
n++;
}
}
