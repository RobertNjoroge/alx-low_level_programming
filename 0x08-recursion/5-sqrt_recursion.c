#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - a function that returns the natural square root
 * @n: number to be used
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (sqrt(0, n));
}

/**
 * _sqrt - returns the square root of a number
 * @n: test number
 * @x: squared number
 *
 * Return: the square root of n
 */
int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
