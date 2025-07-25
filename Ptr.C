#include<stdio.h>
int main ()
{ 

  int a = 12;
   int *ptr;
   ptr=a;
printf("the value of a is :/n%d",a);printf("the address of ptr:/n%d",*ptr);
printf(" the value of ptr :/n%d",&a);
printf(" the value of ptr :/n%d",ptr);

  return 0;
}
