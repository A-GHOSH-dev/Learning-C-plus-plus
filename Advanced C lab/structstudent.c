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

scanf("%s\n%s\n%d\n%d\n%d", &st.rollno, &st.name, &st.m1, &st.m2, &st.m3);
st.avg=(st.m1+st.m2+st.m3)/3;
printf("%s\n%s\n%d\n%d\n%d\n", st.rollno, st.name, st.m1, st.m2, st.m3);
}
