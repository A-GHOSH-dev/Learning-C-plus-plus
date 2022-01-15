#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int binarytodecimal(int n)
{
    int ans=0;
    int x=1;
    while(n>0)
    {
        int y=n%10;
        ans=ans+x*y;
        x=x*2;
        n/=10;
    }
    return ans;
}

int hexatodec(string n)
{
    int ans=0;
    int x=1;
    int s = n.size();
    for(int i=s-1; i>=0; i--)
    {
        if(n[i]>='0' && n[i]<='9')
        {
            ans += x*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F')
        {
            ans += x*(n[i]-'A'+10);
        }
        x*=16;
    }
    return ans;
}


int main()
{
 int a;
 string b;
 cin>>a;
 cin>>b;
 cout<<binarytodecimal(a)<<endl;
 cout<<hexatodec(b);
}