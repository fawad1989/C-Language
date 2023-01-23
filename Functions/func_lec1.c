#include <stdio.h>
#include <stdlib.h>


/*
    The purpose is to make a function and return a value.
    Fibonacci Series 0,
                     1,
                     0+1=1,
                     1+1=2,
                     1+2=3,
                     2+3=5,
                     3+5=8,
                     ...
*/
int fib(int x);
int main()
{
    int n = 0;
    int req;
    while(req != 0)
    {
        printf("Enter number:");
        scanf(" %d", &req);
        n = fib(req);
        printf("\nThe %dth number is: %d\n",req,n);
    }
    return 0;
}

int fib(int x)
{
    int n1 = 0;
    int n2 = 1;
    int i, k;

    if (x == 0)
    {
        return n1;
    }
    else if (x == 1)
    {
        return n2;
    }
    else
    {
        for (int i = 0; i < x-2; i++)
        {
            k = n2;
            n2 = n1+n2;
            n1 = k;
        }
        return n2;
    }
}