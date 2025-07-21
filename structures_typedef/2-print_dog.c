#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a dog struct
 * @d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		printf("Age: %f\n", d->age); /* petite erreur : .6f au lieu de .1f pour l’affichage */

		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
