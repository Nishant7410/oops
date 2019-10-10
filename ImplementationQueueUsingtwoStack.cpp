#include<iostream>
#include<stack>
using namespace std;
  void push1(stack<int> &st1, stack<int> &st2, int item)
  {
    while(!st1.empty())
    {
      st2.push(st1.top());
      st1.pop();
    }
    st1.push(item);
    while(!st2.empty())
    {
      st1.push(st2.top());
      st2.pop();
    }
  }

  int pop1(stack<int> &st1)
  {
   if(!st1.empty())
   {
     int k=st1.top();
     st1.pop();
     return k;
   }
    return -1;
  }
  int front1(stack<int> &st1)
  {
      if(!st1.empty())
        return st1.top();
      return -1;
  }
  int main()
  {
      stack<int>s1;
      stack<int>s2;
      push1(s1,s2,15);
      push1(s1,s2,10);
      cout<<"pop element is "<<pop1(s1)<<endl;
      cout<<"peek element is "<<front1(s1)<<endl;
      push1(s1,s2,2);
      push1(s1,s2,56);
      cout<<"peek element is "<<front1(s1)<<endl;

  }
