
#include<iostream>
using namespace std;
class abc
{
int m,n,a[10][10];
public:
abc(int x,int y)
{
m=x,n=y;
int i,j;
for(i=0;i<m;i++)
for(j=0;j<n;j++)
cin>>a[i][j];

}
void get()
{
int i,j;
for(i=0;i<m;i++)
for(j=0;j<n;j++)
cout<<a[i][j];
}
};
int main()
{
int m,n;
cin>>m>>n;
abc ob(m,n);
ob.get();
}
