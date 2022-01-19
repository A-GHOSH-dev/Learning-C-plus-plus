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

    int curr;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i; j < n-1; j++)
        {
            if (arr[i] < arr[i + j] || arr[i + j] > arr[i + j + 1])
            {
                curr = arr[i + j];
            }
            cout<<curr;
        }
    }
    
}