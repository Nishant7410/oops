#include<iostream>
#include<stdlib.h>

using namespace std;

class twoStacks
{
    int *arr;
    int size;
    int top1, top2;
public:
   twoStacks(int n)
   {
       size = n;
       arr = new int[n];
       top1 = -1;
       top2 = size;
   }
   void push1(int x)
   {
       if (top1 < top2 - 1)
       {
           top1++;
           arr[top1] = x;
       }
       else
       {
           cout << "Stack Overflow";
           exit(1);
       }
   }
   void push2(int x)
   {
       if (top1 < top2 - 1)
       {
           top2--;
           arr[top2] = x;
       }
       else
       {
           cout << "Stack Overflow";
           exit(1);
       }
   }
   int pop1()
   {
       if (top1 >= 0 )
       {
          int x = arr[top1];
          top1--;
          return x;
       }
       else
       {
           cout << "Stack UnderFlow";
           exit(1);
       }
   }
   int pop2()
   {
       if (top2 < size)
       {
          int x = arr[top2];
          top2++;
          return x;
       }
       else
       {
           cout << "Stack UnderFlow";
           exit(1);
       }
   }
};
int main()
{
    twoStacks ts(5);
    ts.push1(8);
    ts.push2(5);
    ts.push2(10);
    ts.push1(18);
    ts.push2(6);
    cout << "Popped element from stack1 is " << ts.pop1();
    ts.push2(9);
    cout << "\nPopped element from stack2 is " << ts.pop2();
    return 0;
}

