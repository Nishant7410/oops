#include<iostream>
using namespace std;
int main()
{
    int l=INT_MIN;
    int s=INT_MIN;
    int a[5];
    for(int i=0;i<5;i++)
        cin>>a[i];
    for(int i=0;i<5;i++)
    {
        if(a[i]>l)
        {
            s=l;
            l=a[i];
        }
        else if(a[i]>s&&a[i]!=s)
            s=a[i];
    }
    cout<<s;
}
