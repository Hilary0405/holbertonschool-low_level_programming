#include "main.h"

/**
 * _isalpha - Checks for an alphabetic letter.
 * @c: The character to check
 *
 * Return: 1 if c is a letter, or 0 if it is not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
