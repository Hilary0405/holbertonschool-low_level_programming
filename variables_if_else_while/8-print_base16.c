#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 without using char
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0;

	while (i < 16)
	{
		putchar(i < 10 ? i + '0' : i - 10 + 'a');
		i++;
	}

	i = 97;

	while (i <= 102)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
