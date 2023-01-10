#include<stdio.h>
int main()
{
    char st[10];
    int i=0;
    int count=0;
    scanf("%s", st);
    while(st[i]!='\0'){
            if(st[i]=' ')
            {
                i++;
                continue;
            }
        count++;
        i ++;

    }
    printf("%d", count);





};

