#include<stdlib.h>
#include<string.h>
int compare(const void *a,const void *b)
{
    return(*(char*)a-*(char*)b);
}
void swap(char *a,char *b)
{
    char temp=*a;
    *a=*b;
    *b=temp;
}
void fun(char *str)
{
int l=1;
int size=strlen(str);
qsort(str,size,sizeof(char),compare);
do
{
    printf("%s\n",str);
int i;
for(i=size-2;i>=0&&str[i]>=str[i+1];i--);
    if(i>-1)
    {
        int j=i+1;
        int k;
      for(k=j;k<size&&str[k];k++)
            if(str[k]>str[i]&&str[k]<str[j])
            j=k;
      swap(&str[i],&str[j]);
      qsort(str+i+1,size-i-1,sizeof(char),compare);
    }
    else
        l=0;
}while(l);
}
int main()
{
   char str[10];
   scanf("%s",str);
   fun(str);
}
