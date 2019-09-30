#include<iostream>
using namespace std;
int main()
{
    int c;
    cin>>c;
    int child;
    cin>>child;
    int ar[child]={0};
    int i=0;
    int count=1;
    while(c>0)
    {
        if(i==child)
            i=0;
        if(count<=c)
        ar[i]=ar[i]+count;
        else
        {
        ar[i]=ar[i]+c;
        c=0;
        continue;
        }
        i++;
        c=c-count++;

    }
for(int j=0;j<child;j++)
    cout<<ar[j]<<" ";
}
