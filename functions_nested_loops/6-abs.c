#include "main.h"

/**
 * _abs - computes the absolut value of an integar
 * @n: The integar to check
 *
 * Return: The basolut value of n.
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
