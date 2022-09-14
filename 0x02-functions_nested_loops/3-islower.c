#include "main.h"
#include <ctype.h>
/**
 * _islower - Program check if character is lowercase
 * @c: input parameter
 * Return: 1 for lowercase, 0 if it's not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	putchar('\n');
}
