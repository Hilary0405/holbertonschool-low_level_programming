#include "main.h"

/**
 * print_most_numbers - Prints the numbers, from 0 to 9, followed by a new line
 * Do not print 2 and 4
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2')
		{
			if (c != '4')
			{
				_putchar(c);
			}
		}
	}
	_putchar('\n');
}
