#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c;
    printf("Enter marks: \n");
    scanf("%d\n%d\n%d", &a, &b, &c);
    if(a,b,c>=50)
    {
        float sum = (a+b+c)/3;
        if(sum>=90)
        {
            printf("S");
        }
        else if(80=<sum<90)
        {
            printf("A");
        }
        else if(70=<sum<80)
        {
            printf("B");
        }
        else if(60=<sum<70)
        {
            printf("C");
        }
        else if(50=<sum<60)
        {
            printf("D");
        }
        else
        {
            printf("F");
        }

    }
    else{
        printf("F");
    }

    return 0;
}
