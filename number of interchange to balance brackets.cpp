#include<iostream>
#include<stack>
using namespace std;
int main()
{
stack<char>st;
string str;
cin>>str;
for(int i=0;i<str.length();i++)
{
   if(str[i]==']'&&!str.empty())
   {
       if(st.top()=='[')
       st.pop();
       else
        st.push(str[i]);

   }
   else
    st.push(str[i]);

}
   int n=st.size();
   int s=0;
   while(!st.empty()&&st.top()=='[')
   {
       st.pop();
       s++;
   }
   cout<< (n/2+s%2);
}
