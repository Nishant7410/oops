#include<iostream>
#include<queue>
using namespace std;
  void push1(queue<int>&q1,queue<int>&q2,int item)
  {
    q2.push(item);
    while(!q1.empty())
    {
      int k=q1.front();
      q1.pop();
      q2.push(k);
    }
    while(!q2.empty())
    {
    q1.push(q2.front());
    q2.pop();
    }
  }

  int pop1(queue<int>q1)
  {
    if(q1.empty())
      return 0;

   int temp= q1.front();
    q1.pop();
    return temp;
  }
  int peek1(queue<int>q1)
  {
      if(q1.empty())
        return 0;
      return q1.front();
  }
  int main()
  {
      queue<int>q1;
      queue<int>q2;
      push1(q1,q2,10);
      push1(q1,q2,15);
      cout<<"Removed front Element "<<pop1(q1)<<endl;
      push1(q1,q2,42);
      cout<<"front Element "<<peek1(q1)<<endl;
      push1(q1,q2,23);
      push1(q1,q2,78);
      cout<<"front Element "<<peek1(q1)<<endl;

  }
