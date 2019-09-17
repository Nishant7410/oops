#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num;
    cin>>num;
    if(num<=n)
    {
        cout<<"row: 0 "<<"column: "<<num-1;
    }
    else{
        num=num-n;
        int rem=num%(n-1);
        int quo=num/(n-1);
        if(rem==0)
        {
            quo-=1;
            if(quo%2==0)
                cout<<"row: "<<quo+1<<" column: 0";
            else
                cout<<"row: "<<quo+1<<" column: "<<n-1;
        }
        else{
            if(quo%2==0)
            {
                cout<<"row: "<<quo+1<<" column: "<<n-(rem+1);
            }
            else
            {
                cout<<"row: "<<quo+1<<" column: "<<rem;
            }
        }
    }
}
