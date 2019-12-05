#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-1-i;j++)
        if(arr[j]>arr[j+1])
    {
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    }

    int c=1;
    for(int i=0;i<n-1;i++)
        if(arr[i]+1==arr[i+1])
        c++;
    if(c==1)
        cout<<"0";
    else
        cout<<c;
}
