#include <stdio.h>
#include <stdlib.h>

/*
    A recursive function is calling itself inside itself for ecample

    void f()
    {
        printf("Hello World");
        f();
    }

    The issue here is that it will continue to execute so there is a need for an exit condition.

    The example below shows an ecit condition from a recursive function
*/

void simperecur(int x);
int recur_add(int z);
int recur_add_even(int z);

int main()
{
    // simperecur(20);
    int r = recur_add_even(4);
    printf("Result is %d\n", r);
    
    return 0;
}

void simperecur(int x)
{
    if(x < 0)
    {
        return ;
    }
    printf("Value is %d\n",x);
    simperecur(x - 1);
}

int recur_add(int z)
{
    if(z == 0) // == 0 is an optimization 
    {
        return 0;
    }
    else
    {
        return z + recur_add(z - 1);
    }
}

int recur_add_even(int z)
{
    if(z == 0) // == 0 is an optimization 
    {
        return 0;
    }
    else
    {
        if (z%2 == 0)
        {
            return z + recur_add_even(z-2);
        }
    }   

}