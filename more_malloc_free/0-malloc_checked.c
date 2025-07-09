#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - alloue de la mémoire
 * @b: taille à allouer
 *
 * Return: pointeur vers la mémoire, ou exit avec code 98 si échec
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
