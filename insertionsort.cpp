#include<iostream>
using  namespace std;
int main(){
int n;
cin>>n;
int ar[n];
for(int i=0;i<n;i++)
    cin>>ar[i];
int c=0,key,j;
for(int i=0;i<n;i++){
    int chk=0;
    key=ar[i];
    j=i-1;
    while(j>=0&&ar[j]>key){
        j=j-1;
        ar[j+1]=ar[j];
        c++;
        chk=1;
    }
    if(chk==1)
        c++;
    ar[j+1]=key;
}
for(int i=0;i<n;i++)
    cout<<ar[i]<<endl;
}
