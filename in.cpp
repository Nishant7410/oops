#include<iostream>
using namespace std;
class A
{
public:
int k;
void get2()
{
cin>>k;
}
};
class B:public A
{
public:
void get1()
{cout<<"x"<<endl;
get();
}
void get()
{
    cout<<"s"<<endl;
}
};
class C:public B
{
public:
void get()
{
    cout<<"abc"<<endl;
B::get1();
}
void put()
{
cout<<k<<endl;
}
};
int main()
{
C ob;
B ob1;
ob.get();
}
