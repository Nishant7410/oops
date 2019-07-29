#include<iostream>
using namespace std;
int main()
{
    int ar[5];
    for(int i=0;i<5;i++)
    {
        cin>>ar[i];
    }
    int max=ar[1]-ar[0];
    for(int i=0;i<4;i++)
        for(int j=i+1;j<5;j++)
        if(ar[j]-ar[i]>max)
        max=ar[j]-ar[i];
    cout<<max;
}
