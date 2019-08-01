#include<iostream>
#include<stdio.h>
#include<fstream>
using namespace std;
int main()
{
ofstream in("sample.txt");
int n,l=0,c=0;
string s;
cin>>n;
char str[100];
getchar();
for(int i=0;i<n;i++)
{
cin.getline(str,100);
in<<str<<endl;
}
ifstream out("sample.txt");
while(!out.eof())
{
getline(out,s);
for(int j=0;j<s.length();j++)
if(s[j]!=32)
c++;
l++;
}
ofstream in1("sample1.txt");
in1<<"character : "<<c<<"\n"<<"line :"<<l-1;
}
