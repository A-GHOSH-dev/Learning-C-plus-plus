#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int sumnum(int n)
{
    int sum=0;
    for(int i=1; i<=n; i++)
    {
sum=sum+i;

    }
    return sum;
}
int main()
{
    int a;
    cin>>a;
    cout<<sumnum(a);
}