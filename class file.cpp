#include<iostream>
#include<fstream>
using namespace std;
class stu
{
string name;
int roll,age;
public:
void getdata()
{
cin>>name>>roll>>age;
}
void putdata()
{
cout<<name<<" "<<roll<<" "<<age<<endl;
}
};
int main()
{
ofstream in("sample.txt");
stu ob;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
ob.getdata();
in.write((char*)&ob,sizeof(stu));
}
in.close();
int n1;
//cin>>n1;
ifstream out("sample.txt");
//out.seekg((n1+1)*sizeof(stu),ios::cur);
while(out.read((char*)&ob,sizeof(stu)))
{
ob.putdata();
}
}
