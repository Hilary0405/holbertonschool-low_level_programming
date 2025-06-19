#include <stdio.h>

/**
* print_shape - function to print a shape
*/
int main(void) 
{
    int idx1, idx2;
    for (idx1 = 10; idx1 >= 1; idx1--)
    {
        for (idx2 = 1; idx2 <= 10 - idx1; idx2++)
	{
		printf(" ");
	}
		for (idx2 = 1; idx2 <= idx1; idx2++)
        {
            printf("#");
        }
        printf("\n");
    }
    return (0);
}
