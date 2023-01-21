#include<stdio.h>

int main()
{
    // Pointer to an integer
    int *p;  //pointer

    // Pointer to an array of 5 integers
//pointer to an array
    int arr[5];
   int (*ptr)[5];

// Points to 0th element of the arr.
    p = arr; //base address

    // Points to the whole array arr.
    ptr = &arr;

    printf("p = %p, ptr = %p\n", p, ptr);

    p++;
    ptr++;

    printf("p = %p, ptr = %p\n", p, ptr);
   return 0;
}

