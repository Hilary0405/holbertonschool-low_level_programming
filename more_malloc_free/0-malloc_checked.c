#include <stdlib.h>

/**
 * malloc_checked - alloue de la mémoire
 * @b: taille en octets à allouer
 *
 * Return: un pointeur vers la mémoire allouée ou quitte avec 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
