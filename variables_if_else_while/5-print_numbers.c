#include <stdio.h>

/**
 * main - Prints all single digit numbers from 0, followed by a new line
 *
 * Result: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
