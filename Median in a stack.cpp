#include<stack>
#include<iostream>
using namespace std;
void fun(stack<int> &s,int t,int c=0)
{
   if(c==t||s.empty())
    return;
   int x=s.top();
   s.pop();
   fun(s,t,c+1);
   if(c!=t/2)
    s.push(x);
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    fun(s,s.size());
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
