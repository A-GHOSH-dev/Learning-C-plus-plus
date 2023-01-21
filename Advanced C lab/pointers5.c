#include<stdio.h>
#include<conio.h>
main()
{
    char *a[]={"VIT","VELLORE","UNIVERSITY"};
      int i,j;
    for(i=0;i<3;i++)
    {
        printf("%s\t%s\t%c\n",a[i],*(a+i),*(a[1]+2));
        printf("%c\t%c\n",*(a[0]+1),*(a[2]+4));
    }
       getch();
}
