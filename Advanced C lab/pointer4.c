#include <stdio.h>
int main()
{
int a = 10;
int b = 20;
printf("Before swapping the values in main a = %d, b = %d\n",a,b);
swap(a,b);
printf("After swapping values in main a = %d, b = %d\n",a,b);
}
void swap (int p, int q)
{
int temp;
temp = p;
p=q;
q=temp;
}
