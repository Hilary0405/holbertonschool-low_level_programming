#include "main.h"
#include <stdlib.h>

/**
 * create_array - crée un tableau de char et l'initialise avec un char donné
 * @size: taille du tableau
 * @c: caractère d'initialisation
 *
 * Return: pointeur vers le tableau ou NULL si échec
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
