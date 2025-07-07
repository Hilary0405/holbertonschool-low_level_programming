#include "main.h"

/**
 * check_prime - helper to test divisibility recursively
 * @n: number to check
 * @i: current divisor
 *
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int n, int i)
{
	if (i * i > n)
		return (1); /* Aucun diviseur trouvé = nombre premier */
	if (n % i == 0)
		return (0); /* Diviseur trouvé = pas un nombre premier */
	return (check_prime(n, i + 1)); /* Essai avec le diviseur suivant */
}

/**
 * is_prime_number - checks if a number is a prime
 * @n: the number
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0); /* 0, 1, négatifs = pas premiers */
	return (check_prime(n, 2)); /* On commence à tester à partir de 2 */
}
