#include "dog.h"

/**
 * init_dog - initialise une variable de type struct dog
 * @d: pointeur vers la struct
 * @name: nom
 * @age: âge
 * @owner: propriétaire
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
