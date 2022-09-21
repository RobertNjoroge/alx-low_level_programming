#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - appends src string to the dest string
 * @dest : parameter
 * @src: parameter
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
