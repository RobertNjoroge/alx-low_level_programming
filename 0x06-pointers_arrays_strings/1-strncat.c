#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - a function that concatenates two strings
 * @dest: string parameter
 * @src: string to be appended
 * @n: parameter
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
