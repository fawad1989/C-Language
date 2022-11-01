#include <stdlib.h>
#include <stdio.h>

#define PRODUCT(X,Y)    X*Y		// Parametrized Macro with variables and their functionality and the value of the macro is the operation that takes place

#define PARAMETRIZED_MACRO  1

/*
    This is a copy paste kind of operation and do not care 
*/

int main(void)
{
	int a = 2, b = 6;
    #if PARAMETRIZED_MACRO
        printf("%d\n", PRODUCT((a+1),b)); // will return 18 and is equivalent to as below
        // printf("%d\n", (a+1)*b); // parametrized macro and return 18

    #else // Non-parametrized macros
        printf("%d\n", PRODUCT(a+1,b)); // will return 12 and is equivalent to as below
        // printf("%d\n", a+1*b); // return 8 as 6*1 +2 = 8 
    #endif


	return 0;
}