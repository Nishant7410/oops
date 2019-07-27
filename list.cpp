#include<iostream>
#include<set>
#include<list>
#include <algorithm>
#include<fstream>
#include<map>
using namespace std;
int main()
{
int a[5];
for(int i=0;i<5;i++)
cin>>a[i];
list<int>l(a,a+5);
list<int>my(a,a+2);
list<int>::iterator it1,it2;
it1=l.begin();
it2=l.begin();
advance(it2,3);
//iter_swap(it1,it2);
//l.splice(it2,my);
//l.erase(it1,it2);
l.unique();
l.sort();
list<int>::iterator it;
for(it=l.begin();it!=l.end();it++)
cout<<*it<<endl;
}
/*class stu
{
int roll;
string name;
public:
    void getdata()
    {
        cin>>name>>roll;
    }
    void putdata()
    {
        cout<<name<<" "<<roll<<endl;
    }
};
int main()
{
    stu ob;
    ofstream in("E:\\oops\\data.txt");
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ob.getdata();
        in.write((char*)&ob,sizeof(stu));

    }
    int n1;
    cin>>n1;

    in.seekp((n1-1)*sizeof(stu),ios::beg);
    ob.getdata();
    in.write((char*)&ob,sizeof(stu));
    in.close();
     ifstream out("E:\\oops\\data.txt");
   while(out.read((char*)&ob,sizeof(stu)))
        ob.putdata();
    out.close();
}*/
/*nt main()
{
    int roll;
    string name;
    int n;
    cin>>n;
    map<int,string>map1;
    for(int i=0;i<n;i++)
    {
        cin>>roll>>name;
        map1.insert(pair<int,string>(roll,name));
    }
    map<int,string>::iterator it;
    for(it=map1.begin();it!=map1.end();it++)
        cout<<it->first<<" "<<it->second<<endl;

}*/
