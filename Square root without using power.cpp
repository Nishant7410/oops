#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float i;
    for(i=0.00;i*i<n;i=i+0.001);
    cout<<i;

}
