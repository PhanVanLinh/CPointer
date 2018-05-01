# CPointer

### Fundamental

#### Declare pointer  
    
    int a = 5;
    int *p = &a; // declare pointer p and store address of a in pointer variable

OR
    
    // int a = 5;   
    // int *p;  
    // p = &a; // REMEMBER NOT *p = &a;

#### Value from pointer

    *p  <=> return value store at address p => will return 5. 

It is hard to understand why here because we already set `*p = &a` so `*p` should print the address of a not the value of a.  
Current thinking is:  it is C syntax @@

#### Address from pointer

    &a <=> return address of a in memory
    p  <=> return address of a in memory
    


### Pointer in function

    void increaseUsePointer(int *val){
    	*val += 1; // IT MEAN, increasement the value store at address val by 1  (*val <=> value at address var)
    }
    
### Quick note
- Pass array to function argument in C is pass-by-reference (it will pass the address of array to function)
### References
Very good tutorial
- https://www.youtube.com/watch?v=LW8Rfh6TzGg
- https://www.youtube.com/watch?v=CpjVucvAc3g
