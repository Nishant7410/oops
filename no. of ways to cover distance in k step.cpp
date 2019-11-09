#include<iostream>
using namespace std;
int ways(int d,int k)
{
    if(d==0)
        return 1;
    else if(k==0||d<0)
        return 0;
    else
    {
        int sum=0;
        for(int i=1;i<=k;i++)
            sum+=ways(d-i,k);
        return sum;
    }
}
int main()
{
    int d,k;
    cin>>d>>k;
    cout<<ways(d,k);
}
