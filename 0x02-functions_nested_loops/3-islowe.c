#include "main.h"
/**
 * _islower checks for lowercase letters
 * Returm: 0 (Success)
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
	putchar ('\n');
}
