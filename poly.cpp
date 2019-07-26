#include<iostream>
using namespace std;
/*class base
{
public:
base()
{
cout<<"base"<<endl;
}
~base()
{
cout<<"basedes"<<endl;
}
};
class der:public base
{
public:
der()
{
cout<<"der"<<endl;
}
~der()
{
cout<<"derdes"<<endl;
}
};
int main()
{
base *p;
p=new der();
}*/
class base
{
public:
    int k;
    virtual void get()=0;
    void put()
    {
        cin>>k;
    }
};
class der:public base
{
public:
    void get()
    {
    cin>>k;
    }
};
int main()
{
    der ob;
   base *p;
   p=&ob;
   p->get();
   p->put();
   cout<<ob.k;

}
