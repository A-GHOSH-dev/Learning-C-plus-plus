#include<iostream>
#include<conio.h>
using namespace std;
class vit
{
int x,y;
public:
vit()
{
x=1;
y=2;
}
void add()
{//member function
cout<<"The sum of the numbers are: "<<(x+y);
}
};
int main()
{
vit obj;
obj.add();
return 0;
}
//The sum of the numbers are: 3
