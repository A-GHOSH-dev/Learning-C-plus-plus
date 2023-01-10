#include <stdio.h>
void main()
{
    signed int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n!=0){
        if(n>0){
            printf("Positive number \n");
            if(n%2==0){
                printf("Number is even");
            }
            else{
                printf("Number is odd");
            }
        }
        else{
            printf("Negative number");
        }
    }
    else{
        printf("Invalid input");
    }
    return 0;
}
