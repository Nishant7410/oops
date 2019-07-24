#include<iostream>
#include<stack>
using namespace std;
int main()
{
int a[5];
for(int i=0;i<5;i++)
cin>>a[i];
stack<int>s;
for(int i=0;i<5;i++)
    s.push(a[i]);
cout<<s.size();
}
