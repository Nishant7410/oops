#include<iostream>
using namespace std;
/*template <class T,class U>
class abc
{
    T a;
    U b;
public:
    abc(T x,U y);
    void get()
    {
    cout<<a<<b;
    }
};
template <class T,class U>
abc<T,U>::abc(T x,U y)
    {
        a=x;
        b=y;
    }

int main()
{
    int a;
    float b;
    cin>>a>>b;
    abc<int,float> ob(a,b);
    ob.get();
}*/
template<class T,class V>
class abc
{
    int a;
    char b;
    public:
        void fun(int x);
};
template<class T,class V>
void abc<T,V>::fun(int x)
{
    a=x;
    cout<<a;
}
int main()
{
    abc<int,char> ob;
    ob.fun(2);
}
