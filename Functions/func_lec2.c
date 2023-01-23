#include <stdio.h>
#include <stdlib.h>

/*
    Returning multivple values from a function, Pointers will be utilized to achieve this.

    Program:
    Inputs a and B and returns a+b and a*b
*/

void sumAndproduct(int a , int b, int* sum, int* prd);

int main()
{
    int x = 5, y = 6, sum, prod;
    sumAndproduct(x,y,&sum,&prod);
    printf("Sum = %d,\nProduct = %d\n", sum, prod);
    return 0;
}

void sumAndproduct(int a , int b, int* sum, int* prd)
{
    *sum = a+b;
    *prd = a*b;
}