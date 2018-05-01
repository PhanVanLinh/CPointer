/*
Fundermantal
In C, when pass the array to a arugment of array, it will pass the first reference of array to the function
(pass array in C <=> pass by reference (not pass by value)

Why array is pass by reference (default)?
Maybe array can big so each time we pass it to function, we need to make a copy, it waste memory. If pass by reference then we don't need to copy

Address of array in C?
Still don't understand it very well but it will look like
Example we have array a int[3] and the address of first item is 200 (arrs[0])
=> the address of second item is 204
=> the address of third item is 208
(because each int have 4 byte and array item store close together)

AND the address of array is equal to the address of the first item (= 200)
*/
#include <stdio.h>
void doubleArrayNormal(int arrs[], int size){
   for(int i = 0; i < size; i++){
   		arrs[i] = arrs[i] * 2;
   }
}

// Will print the result SIMILAR to {doubleArrayNormal}
void doubleArrayUsePointer(int *arrs, int size){
   for(int i = 0; i < size; i++){
   		arrs[i] = arrs[i] * 2;
   }
}

int main () {

   int arrs[] = {1, 2, 3, 4, 5};
   
   printf("\n Address of array %d ", arrs);
   printf("\n Address of the first item %d ", &arrs[0]); // address of the first item of array is similar to address of array
   
   //doubleArrayNormal(arrs, 5);    // return 2 4 6 8 10 (similar to pointer way)
   doubleArrayUsePointer(arrs, 5); // return 2 4 6 8 10  (similar to normal way)
   
   printf("\n");
   for(int i = 0; i < 5; i++){
   		printf("%d ", arrs[i]);
   }

   return 0;
}
