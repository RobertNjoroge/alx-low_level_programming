#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *r;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	r = malloc(sizeof(char) * (i + j + 1));

	if (r == NULL)
	{
		free(r);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		r[k] = s1[k];

	l = j;
	for (j = 0; j <= l; k++, j++)
		r[k] = s2[j];

	return (r);
}
