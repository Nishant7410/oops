#include<iostream>
using namespace std;
int &max(int &a,int &b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int a,b,k;
    cin>>a>>b;
    k=max(a,b);
    cout<<a<<b;
}
