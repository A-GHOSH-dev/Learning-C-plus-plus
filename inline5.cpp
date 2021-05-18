#include <iostream>
#include<conio.h>
using namespace std;
void swap(int *x,int *y)
{
    int t;
     t   = *x;
    *x   = *y;
    *y   =  t;
}

int main()
{
    int number1,number2;

    cout<<"Enter value of number1: ";
    cin>>number1;
    cout<<"Enter value of number2: ";
    cin>>number2;



    cout<<"Before Swapping, number1 is: "<<number1<<"number2 is: "<<number2;


    swap(&number1,&number2);


    cout<<"\nAfter  Swapping, number1 is: "<<number1<<" number2 is: "<<number2;

    return 0;
}
