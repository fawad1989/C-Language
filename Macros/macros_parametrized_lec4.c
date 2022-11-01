#include <stdlib.h>
#include <stdio.h>

#define PRINT_VAR(X)    printf("Value is: %d and the address of the variable is: %p\n", X, &X)
#define PRINT_VAR_NAME(Y)    printf(#Y " is at the address: %p", &Y)

int main(void)
{
    int a = 5;
    PRINT_VAR(a); // called 
    PRINT_VAR_NAME(a); // with variable name and value and address 

	return 0;
}