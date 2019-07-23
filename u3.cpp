#include<iostream>
using namespace std;
class stud
{
private:
    int rollno;
    string course;
public:
    void read()
    {
        cin>>rollno>>course;
    }
    void show()
    {
        cout<<rollno<<name;
    }
};
class res:public stud
{
private:
    int m[4];
    double per;
public:
    void get_m()
    {
        int i;
        for(i=0;i<4;i++)
        {
            cin>>m[i];
        }
    }
    void calper()
    {
        int i,sum=0;
        for(i=0;i<4;i++)
        {
            sum=sum+m[i];
        }
        per=sum/4.0;
    }
    void showper()
    {
        cout<<per;
    }
}r1;
int main()
{
    r1.read();
    r1.get_m();
    r1.calper();
    r1.showper();
    return 0;
}

