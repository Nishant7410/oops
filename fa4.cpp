#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
string s;
ofstream in("E:\\oops\\mod.txt");
for(int i=0;i<2;i++)
{
cin>>s;
if(i<1)
in<<s<<" ";
else
in<<s;
}
in.close();
ifstream out("E:\\oops\\mod.txt");
string str[10];
int k=-1;
while(!out.eof())
{
out>>str[++k];
}
out.close();
ofstream in1("E:\\module");
for(int i=0;i<=k;i++)
{
string str1;
str1="(";
  for(int j=0;j<str[i].length();j++)
{
if(str[i][j]=='o')
str[i][j]='0';
else if(str[i][j]=='d')
str[i][j]='4';
else if(str[i][j]=='l')
str[i][j]='8';
else
str[i][j]=str[i][j];
}
str1+=str[i];
str1+=")";
if(i<k)
in1<<str1<<" ";
else
in1<<str1;
}
in1.close();
ifstream out1("E:\\module");
string a;
while(!out1.eof())
{
out1>>a;
cout<<a<<" ";
}
out1.close();
}
