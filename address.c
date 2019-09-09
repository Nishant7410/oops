#include <stdio.h>
void print(int a)
{
   char *c=(char*)&a;
  for(int i=0;i<4;i++){
    printf("%p %x\n",&c[i],c[i]);
  }
}
int main()
{
    int a=12345;
  print(a);
    return 0;
}
