#include <stdio.h>
void main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n!=0){
        if(n>0){
            printf("Positive number");
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
