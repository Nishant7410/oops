#include<iostream>
using namespace std;
template <class T>
void fun(T a)
{
cout<<a;
}
int main()
{
fun(1);
fun(1.1);
}
