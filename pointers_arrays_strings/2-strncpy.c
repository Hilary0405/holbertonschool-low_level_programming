#include "main.h"

/**
 * _strncpy - Copies a string, at most n bytes
 * @dest: Buffer storing the string copy
 * @src: Source string
 * @n: Maximum number of bytes to copy
 *
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
