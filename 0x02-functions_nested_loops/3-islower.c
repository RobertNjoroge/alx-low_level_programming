#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 *@c: type int character
 * Return: 1 if letter, lowercase, and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
