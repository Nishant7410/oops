#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int dep[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
        cin>>dep[i];
    int plat=1,r=1;
    int i=1,j=0;
    sort(arr,arr+n);
    sort(dep,dep+n);
    while(i<n&&j<n)
    {
        if(arr[i]<=dep[j])
        {
            plat++;
            i++;
            if(plat>r)
                r=plat;
        }
        else
        {
            plat--;
            j++;
        }
    }
    cout<<r;
}
