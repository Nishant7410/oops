#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#include<list>
#include<set>
#include<map>
#include<fstream>
using namespace std;
/*int main()
{
    int a[5];
    for(int i=0;i<5;i++)
        cin>>a[i];
 list<int>v(a,a+5);
    list<int>v1(4,100);
    list<int>v2;
    list<int>::iterator it,p;
v2.merge(v);
    for(it=v2.begin();it!=v2.end();it++)
        cout<<*it;
}*/
int main()
{
    int x=30,*y,*z,b=10;
    y=&x;
    z=y;
    z=&b;
    (*y)++;
    x++;
    cout<<x<<" "<<*y<<" "<<*z;
}
/*int main()
{
    char s[100];
    string s1;
    ofstream in("hello.txt");
    for(int i=0;i<3;i++)
    {
        cin.getline(s,100);
        in<<s<<endl;
    }
    string s2;
    cin>>s2;
    in.seekp(19);
    in<<s2;
    in.close();
    ifstream out("hello.txt");
    while(!out.eof())
    {
        getline(out,s1);
        cout<<s1<<endl;
    }
}*/
/*class A
{

public:
      int l,b;
    void get()
    {
        cin>>l>>b;
    }

};
class B:public A
{
    public:
  void put()
    {

        cout<<l<<b;
    }
};
int main()
{
   A *ptr;
    B ob;
    ptr=&ob;
   ptr->get();
   ob.put();
}*/
/*class base
{
int k;
public:
void get()
{
cin>>k;}
int put()
{
return k;}
};
class derive1:public base
{
int l;
public:
void set()
{
l=put();
cout<<l;
}
};
class derive2:public base
{
int l;
public:
void set()
{
l=put();
cout<<l;
}
};
int main()
{
derive1  ob;
derive2 ob1;
ob.get();
ob1.get();
ob.set();
ob1.set();
}*/
/*class abc
{

    int r;
public:
    abc()
    {

    }
    abc(abc &ob){
    cout<<"r"<<endl;
    r=ob.r;}
    void get()
    {
        cin>>r;
    }
    void put()
    {

        cout<<r<<endl;
    }
};*/

/*class a
{
public:
    void get()
    {

        cout<<"a";    }
        a()
        {
            cout<<"aa"<<endl;
        }
};
class b:virtual public a
{
public:
    void put()
    {

        cout<<"b";
    }
    b()
    {
        cout<<"bb"<<endl;
    }
};
class c:virtual public a
{
public:
    c()
    {
        cout<<"cc"<<endl;
    }
    void put()
    {
        cout<<"c";    }
};
class d:public b,public c
{
public:
    d():a(),b(),c()
    {
        cout<<"dd"<<endl;
    }
    void put()
    {
        cout<<"d";
    }
};*/
/*class a
{
    int a;
public:
    void get()
    {
        cin>>a;
    }
    int put()
    {
        return this->a;
    }
};
int main()
{
    a ob;
    int c;
    ob.get();
    c=ob.put();
    cout<<c;
}*/
/*class a
{
  ~a()
    {
        cout<<"de";
    }
public:

    a()
    {
        cout<<"co";
    }
};*/
/*int main()
{
string a;
cin>>a;
int j=0,z=0,k=0,i;
for(i=0;a[i]!='\0';i++)
{

    if(a[i]=='(')
    {
        j++;
        z++;
    }
    else if(a[i]==')')
    {
        j--;
        if(z==0)
            break;
    }
    else if(a[i]=='{')
        {
            j++;
            k++;
        }
        else if(a[i]=='}')
        {
            j--;
            if(k==0)
                break;
        }

}
 if(j==0)
            cout<<"-1";
        else if(z==0||k==0)
            cout<<"13";
        else if(z!=0||k!=0)
            cout<<"6";

}*/
/*int main()
{
  int n;
  char name;
  map<char,int>v;
  map<char,int>::iterator it,it1;
  for(int i=0;i<5;i++)
{
      cin>>n>>name;
    v.insert(pair<char,int>(name,n));
  }
for(it=v.begin();it!=v.end();it++)
    cout<<it->first<<" "<<it->second<<endl;
}*/
