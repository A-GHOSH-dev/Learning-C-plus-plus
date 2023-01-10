#include<stdio.h>
struct Student
{
char rollno[10];
char name[25];
int m1, m2, m3;
float avg;

};
int main()
{
struct Student st;
printf("Enter Roll no.: ");
scanf("%s", &st.rollno);
printf("Enter Name: ");
scanf("%s", &st.name);
printf("Enter M1: ");
scanf("%d", &st.m1);
printf("Enter M2: ");
scanf("%d", &st.m2);
printf("Enter M3: ");
scanf("%d", &st.m3);
st.avg=(st.m1+st.m2+st.m3)/3;
printf("Roll no: %s\n", st.rollno);
printf("Name: %s\n", st.name);
printf("M1: %d\n", st.m1);
printf("M2: %d\n", st.m2);
printf("M3: %d\n", st.m3);
printf("Average: %d\n", st.avg);
return 0;
}
