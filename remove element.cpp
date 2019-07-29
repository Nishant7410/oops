#include<iostream>
using namespace std;
int main()
{
    int a[10];
    for(int i=0;i<10;i++)
        cin>>a[i];
    int e;
    cin>>e;
        int k=-1;
    for(int i=0;i<10;i++)
    {
        if(a[i]==e)
        continue;
    a[++k]=a[i];
    }
    for(int i=0;i<=k;i++)
        cout<<a[i]<<" ";
}
