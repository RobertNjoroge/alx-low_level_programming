#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: parameter.
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
		x = -1 * (n % 10);
		putchar(x + '0');
		return (x);
	}
	else
	{
		x = n % 10;
		putchar(x + '0');
		return (x);
	}
}
