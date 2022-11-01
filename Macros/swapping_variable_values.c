#include <stdlib.h>
#include <stdio.h>

#define PRINT_VAR(X)    printf("Value is: %d and the address of the variable is: %p\n", X, &X)
#define PRINT_VAR_NAME(Y)    printf(#Y " is at the address: %p", &Y)

int main(void)
{
    u_int32_t a = 3, b = 8;
    u_int32_t r = 0;

    /*
        Trying to implement reversing of values of the variables.
        a ^=b ^= a ^= b
    */
    // a ^=b ^= a ^= b;
    // printf("a = %d and b = %d", a,b );
    printf("1. a=%d & b=%d\n", a,b);
    a ^= b; 
    printf("2. a=%d & b=%d\n", a,b);
    b ^= a;
    printf("3. a=%d & b=%d\n", a,b);
    a ^= b;
    printf("4. a=%d & b=%d\n", a,b);



	return 0;
}