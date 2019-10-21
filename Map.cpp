#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,string>m;
    m.insert(pair<string,string>("bcd","snj"));
    m.insert(pair<string,string>("abd","snj"));
    m.insert(pair<string,string>("ddd","snj"));
    m.insert(pair<string,string>("ccd","snj"));
    map<string,string>::iterator it;
    for(it=m.begin();it!=m.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
}
