#include<stdio.h>
#include<limits.h>
#include<string.h>
  /* int a[5];
   for(int i=0;i<5;i++)
   scanf("%d",&a[i]);
   int l=INT_MIN;
   int sl=INT_MIN;
   for(int i=0;i<5;i++)
   {
       if(a[i]>l)
       {
           sl=l;
           l=a[i];
       }
       else if(a[i]>sl&&a[i]!=l)
       {
           sl=a[i];
   }
   }
   printf("%d",sl);*/
  /* char ch[5];
   scanf("%s",ch);
   char ch1[5];
   int i;
   for(i=0;i<5;i++)
   ch1[i]=ch[i];
   ch1[i]='\0';
   printf("%s",ch1);*/


int main( )
{
	char s[2] ="abcd" ;
	printf("%d",sizeof(s));
}
