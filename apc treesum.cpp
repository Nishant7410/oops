#include<iostream>
using namespace std;
void fun(int col,int **ar,int row,int sum,int pos,int pos1)
{
    if(pos1<0||pos1>=col)
        return;
else if(pos==row-1)
{

    if(sum+ar[pos][pos1]==25)
        cout<<"yes";
return;
}
else
{

fun(col,ar,row,sum+ar[pos][pos1],pos+1,pos1-1);
fun(col,ar,row,sum+ar[pos][pos1],pos+1,pos1+1);
}
}
int main()
{
int row,col;
cin>>row>>col;
int **a;
a=new int*[row];
for(int i=0;i<row;i++)
    a[i]=new int[col];
for(int i=0;i<row;i++)
for(int j=0;j<col;j++)
cin>>a[i][j];
int pos,pos1;
cin>>pos>>pos1;
fun(col,a,row,0,pos,pos1);
}
