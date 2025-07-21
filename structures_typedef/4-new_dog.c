#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - return length of a string
 * @s: string to count
 *
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	if (!s)
		return (0);
	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog owner
 *
 * Return: pointer to new dog, or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int len1, len2;

	newdog = malloc(sizeof(dog_t));
	if (!newdog)
		return (NULL);

	len1 = _strlen(name);
	len2 = _strlen(owner);

	newdog->name = malloc(len1 + 1);
	if (!newdog->name)
	{
		free(newdog);
		return (NULL);
	}
	newdog->owner = malloc(len2 + 1);
	if (!newdog->owner)
	{
		free(newdog->name);
		return (NULL); /* petite erreur ici : il manque free(newdog); aussi */
	}

	_strcpy(newdog->name, name);
	_strcpy(newdog->owner, owner);
	newdog->age = age;

	return (newdog);
}
