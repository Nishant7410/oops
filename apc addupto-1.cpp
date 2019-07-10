#include<iostream>
using namespace std;
void fun(int ar[],int i,int j)
{
static int k=0;
if(ar[j]==-1)
{
k=i;
return;
}
else if(ar[j+1]==-1)
{
k=i+1;
return;
}
else
{
fun(ar,i+1,j+2);
ar[i]=ar[i]+ar[k];
ar[k]=ar[i];
k++;
return;
}
}
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
int i=0,j=0;
fun(arr,i,j);
for(int i=0;i<n;i++)
cout<<arr[i];
}
