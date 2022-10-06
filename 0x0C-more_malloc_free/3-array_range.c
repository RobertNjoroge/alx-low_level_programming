#include "main.h"
#include <stdlib>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array
 * if man > min returns NULL
 * if malloc fails, Return NULL
 */

int *array_range(int min, int max)
{
	int *r;
	int e;

	if (min > max)
		return (NULL);

	r = malloc(sizeof(*r) * ((max - min) + 1));

	if (r == NULL)
		return (NULL);

	for (e = 0; min <= max; e++; min++)
		r[e] = min;

	return (r);
}
