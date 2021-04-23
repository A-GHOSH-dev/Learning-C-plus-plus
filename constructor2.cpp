#include<iostream>
#include<conio.h>
using namespace std;
class vit
{
int x,y;
public:
vit(int a,int b)
{
x=a;
y=b;
}
void add()
{//member function
cout<<"The sum of the numbers are: "<<(x+y);
}
};
int main()
{
vit obj(1,2);
obj.add();
return 0;
}
//The sum of the numbers are: 3
