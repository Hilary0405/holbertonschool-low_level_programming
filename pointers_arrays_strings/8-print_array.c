#include <stdio.h>
#include "main.h"

/**
 * print_array - print n elements of an array of integers.
 * @a: pointeur vers le tableau d'entier
 * @n: nombre d'elements a afficher
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
