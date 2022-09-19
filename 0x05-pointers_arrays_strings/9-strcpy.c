#include "main.h"

/**
 * _strcpy - copy paste string
 * @dest: destination
 * @src: source
 * Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	int r = 0;

	while (*(src + r) != '\0')
	{
		*(dest + r) = *(src + r);
		r++;
	}
	*(dest + r) = '\0';

	return (dest);
}
