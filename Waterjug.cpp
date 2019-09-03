#include<iostream>
using namespace std;
int gcd(int a,int b)
{

    while(b%a!=0)
    {
        int c=b%a;
        b=a;
        a=c;
    }
return a;
}
int main()
{
    int t,a,b,n;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n;
        if(n>a+b)
            cout<<"No"<<endl;
        else
        {
            if((n%gcd(a,b)==0)&&(a>n||b>n))
                cout<<"Yes"<<endl;
            else
                    cout<<"No"<<endl;
        }
    }
}
