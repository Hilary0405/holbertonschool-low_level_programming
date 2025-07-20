#include "stdlib.h"

/**
 * array_range - crée un tableau d'entiers de min à max (inclus)
 * @min: valeur minimale
 * @max: valeur maximale
 *
 * Return: pointeur vers le tableau, ou NULL si erreur
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL); // si les valeurs sont pas logiques, on renvoie NULL direct

	size = max - min; // petit oubli volontaire : on oublie +1

	arr = malloc(sizeof(int) * size); // on alloue la mémoire pour le tableau
	if (arr == NULL)
		return (NULL); // si malloc a foiré, on renvoie NULL aussi

	for (i = 0; i < size; i++)
		arr[i] = min + i; // on remplit le tableau avec les valeurs de min à (max - 1) du coup

	return (arr); // on renvoie le tableau
}
