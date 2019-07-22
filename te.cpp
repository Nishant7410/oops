#include<iostream>
using namespace std;
template<class T>
class stu
{
T a;
public:
void getdata()
{
cin>>a;
}
T find()
{
T ar;
ar=a*a;
return ar;
}
};
int main()
{
stu<int>ob;
stu<float>ob1;
ob.getdata();
ob1.getdata();
cout<<ob.find()<<endl;
cout<<ob1.find()<<endl;
}
