#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;
/*int main()
{
    int a;
    while(1)
    {
        cout<<"heello"<<endl;
       try
       {
           if(!_getch())
            throw 0;
           else
            throw 1;
       }
       catch(int c)
       {
           if(c)
           cout<<"catch 1"<<endl;
           else
            cout<<"catch 0"<<endl;
       }
    }
}*/
class A
{
public:
    A()
    {
        cout<<"a";
    }
    void get()
    {
        cout<<"A";
    }
};
class B: public A
{
public:
    B()
    {
        cout<<"b";
    }


};
class C: public A
{
public:
    C()
    {
        cout<<"c";
    }


};
class D:public B
{
public:
    D()
    {
        cout<<"d";
    }
};
int main()
{
    D ob;
    ob.get();
}
