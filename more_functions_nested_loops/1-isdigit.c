#include "main.h"

/**
 * _isdigit - check for a digit (0 through 9)
 * @c: the character to  check
 *
 * Return: 1 if c is a digit, 0 otherway
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
