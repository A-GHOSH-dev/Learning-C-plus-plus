#include <stdio.h>
const int MAX = 3;
int main ()
{
   int  var[] = {10, 100, 200};
   int  i, *ptr;
   /* let us have array address in pointer */
   ptr = var;   //var = &var[0]
   for ( i = 0; i < MAX; i++) {
      printf("Address of var[%d] = %x\n", i, ptr );    //4000
      printf("Value of var[%d] = %d\n", i, *ptr );   //10
ptr++;  //ptr = ptr + 1 = 4004
   }
   return 0;
}
