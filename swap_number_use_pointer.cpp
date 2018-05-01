#include <stdio.h>
void swapnum(int *a, int *b)
{
   int temp;

   temp = *a;
   *a = *b;
   *b = temp;
}
int main( )
{
   int v1 = 11, v2 = 77 ;
   printf("Before swapping:");
   printf("\nValue of v1 is: %d", v1);
   printf("\nValue of v2 is: %d", v2);

   /*calling swap function and pass the pointer of v1 and v2*/
   swapnum( &v1, &v2 );

   printf("\nAfter swapping:");
   printf("\nValue of v1 is: %d", v1);
   printf("\nValue of v2 is: %d", v2);
}
