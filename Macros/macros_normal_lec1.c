#include <stdlib.h>
#include <stdio.h>

#define SIZE 10		// Macro Name SIZE with a constant value of 10

/*
	The macro is a preprocessor step, it takes the macro and goes around the code to find the same named macro 
	and replace the variable name i.e. SIZE with a constant thus saving up memory space.
*/

int main(void)
{
	for (int i = 0; i <= SIZE; i++)
	{
		printf("%d\n", i);
	}
	printf("Then End");

	return 0;
}