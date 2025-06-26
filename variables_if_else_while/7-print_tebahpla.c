#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');

	return (0);
}
