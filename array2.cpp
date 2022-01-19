#include <iostream>
#include <conio.h>
#include <cmath>
#include <climits>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int S;
    cin >> S;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {

            sum += arr[j];
            if (sum == S)
            {

                cout << i << " " << j << endl;
                return 0;
            }
        }
    }
    return 0;
}