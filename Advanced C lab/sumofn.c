#include<stdio.h>
int main()
{
int n, num, sum=0;
printf("Enter n: ");
scanf("%d", &n);
for(int i=0; i<n; i++){
scanf("%d", &num);
sum=sum+num;}
printf("%d", sum);}
