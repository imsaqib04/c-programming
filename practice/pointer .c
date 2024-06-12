#include<stdio.h>
int main()
{
int a;
a=5;
int *p;
p = &a;
printf("%d\n",a);
printf("%d\n",&a);
printf("%p\n",p);
printf("%u\n",&p);
printf("%d\n",*p);
return 0;
}