#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];
    int dept[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        cin>>dept[i];
    }

    sort(arr,arr+n);
    sort(dept,dept+n);

    int i=1,j=0,count=1,max=INT_MIN;
    while (i<n && j<n)
    {
        if(dept[j]>=arr[i])
        {
            count++;
            i++;
            if(max<count)
            {
                max=count;
            }
        }
        else
        {
            count--;
            j++;
        }
    }

    cout<<max<<endl;

}
