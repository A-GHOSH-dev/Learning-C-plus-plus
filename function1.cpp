#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int i;
    bool flag = 0;
    for (int i = a; i <= b; i++)
    {
        for (int j = 2; j < sqrt(i); j++)
        {
            if (i % j == 0)
            {

                flag = 1;
                break;
            }
            while(flag == 0)
            {
                cout << i;
            }
        }
    }
}