#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base integer
 * @y: power integer
 *
 * Return: the value of x raised to the power of y,
 * or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1); /* Cas d’erreur si y est négatif */
	if (y == 0)
		return (1);  /* Cas de base : x^0 = 1 */
	return (x * _pow_recursion(x, y - 1)); /* Appel récursif */
}
