#include <stdio.h>
#include <stdlib.h>



int sum(int a, int b)
{
    return a+b;
}

int prod(int a, int b)
{
    return a*b;
}

int functioncaller((*operation)(int a, int b))
{
    printf("result = %d\n",(*operation)(a,b));
}

int main()
{

    functioncaller((&sum)(5,6));
    return 0;
}