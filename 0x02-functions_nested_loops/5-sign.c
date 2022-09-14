#include "main.h"
/**
 * print_sign - determines whether an integer is positive,negative or zero
 * @n: parameter
 * Return: 1 if positive, 0 if zero, -1 if negative, '/' if not a digit.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	if (n == 0)
	{
		putchar('0');
		return (0);
	}
	if (n < 0)
	{
	        putchar('-');
		return (-1);
	}
	else
	{
		putchar('/');
		return ('/');
	}
}


