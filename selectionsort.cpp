#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
     cin>>ar[i];

     int c=0,temp,index;
    for(int i=0;i<n-1;i++)
    {
        int chk=0;
        index=i;
        for(int j=i+1;j<n;j++)
        {
            if(ar[j]<ar[index])
            {
                chk=1;
                index=j;
            }
        }
        if(chk==1)
            c++;
        temp=ar[index];
        ar[index]=ar[i];
        ar[i]=temp;
    }
    for(int i=0;i<n;i++)
        cout<<ar[i]<<endl;
    cout<<c<<endl;
}
