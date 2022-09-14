#include "main.h"
/**
 * print_last_digit - prints last digit of number
 * @n: parameter 
 * Return: last digit
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (r < 0)
		r = r * (-1);

	_putchar(r + 'o');
	return (r);
}
