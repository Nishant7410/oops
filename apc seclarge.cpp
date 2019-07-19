#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
int first=a[0];
int sec=a[0];
for(int i=0;i<n;i++)
{
if(first<a[i])
{
sec=first;
first=a[i];
}
else if(sec<a[i]&&a[i]!=first)
{
sec=a[i];
}
}
cout<<sec;
}
