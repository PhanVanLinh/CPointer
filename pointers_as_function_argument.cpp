#include <stdio.h>

void increaseNormal(int val){
    printf("\nval address %d", &val); // the address of {val} here is DIFFERENT TO the address of {a} in main
	val = val + 1;
}

void increaseUsePointer(int *val){
	printf("\n val address %d", val); // the address of {val} here is as SAME as the address of {a} in main

	*val += 1; // IT MEAN, increasement the value store at address {val} by 1  (*val <=> value at address var)
}

int main( ){
	int a = 1;
	printf("\na Address %d", &a);
    printf("\n Value before a = %d", a);
    
    //increaseNormal(a);
    increaseUsePointer(&a);
    printf("\n Value after a = %d", a); // use normal => print 1. Use pointer => print 2
}
