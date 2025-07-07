#include "main.h"

/**
 * _sqrt_helper - helps to find the natural square root recursively
 * @n: the number to find the square root of
 * @i: the current guess
 *
 * Return: the natural square root or -1 if none found
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1); /* Pas de racine carrée naturelle */
	if (i * i == n)
		return (i); /* Racine trouvée */
	return (_sqrt_helper(n, i + 1)); /* Essai avec le suivant */
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 *
 * Return: the square root or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1); /* Aucun carré naturel pour les négatifs */
	return (_sqrt_helper(n, 0)); /* On commence à 0 */
}
