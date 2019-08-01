#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;
class base
{
  public:
  int a[10],p;
  static int k;
  virtual void store()=0;
  virtual void ret()=0;
};
int base::k=-1;
class stack:public base
{
public:
virtual void store()
{
cin>>p;
a[++k]=p;
}
virtual void ret()
{
int i=0;
cout<<a[k-i]<<endl;
i=i+1;
}
};
class queue:public base
{
public:
virtual void store()
{
cin>>p;
a[++k]=p;
}
virtual void ret()
{
int i=0;
cout<<a[i]<<endl;
i=i+1;
}
};
int main()
{
    // Write your code here
  int n,t;
 cin>>n;
  if(n==1)
  {
    base *p=new stack();
    //stack *ob;
    //p=ob;
    int i;
   for(i=0;i<6;i++)
   {
     cin>>t;
     if(t==1)
     {
       p->store();
     }
     else if(t==2)
       p->ret();
   }
  }
  else if(n==2)
  {
    base *p=new queue();
  //  queue *ob1;
    //p=ob1;
    int i;
    for(i=0;i<6;i++)
    {
      cin>>t;
      if(t==1)
      {
        p->store();
      }
      else if(t==2)
      {
        p->ret();
      }
    }
  }

    return 0;
}
