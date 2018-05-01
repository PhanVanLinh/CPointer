#include <stdio.h>

int main () {

   int  var = 20;   /* actual variable declaration */
   int  *ip;        /* pointer variable declaration */
   ip = &var;  /* store address of var in pointer variable*/
   
   // line 5+6 equivement to
   // int *ip = &var;

   printf("Address %x\n", ip ); // will print a address like 64efafh

   /* Access the value using the pointer */
   printf("Value of *ip variable: %d\n", *ip ); // will print 20

   return 0;
}
