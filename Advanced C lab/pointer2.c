#include <stdio.h>
main()
{
int a, b;
int c=5;
int *p;
a=4*(c+5);

p=&c;
b=4*(*p+5);
printf("a=%d b=%d \n",a, b);
}
