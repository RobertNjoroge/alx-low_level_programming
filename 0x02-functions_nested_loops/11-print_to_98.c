#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: parameter
 * Return: void.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				_putchar("%d", n);
				_putchar("\n");
				break;
			}
			else
			{
				_putchar("%d, ", n);
			}
		}
	}
	for (; n >= 98; n--)
	{
		if (n == 98)
		{
			_putchar("%d", n);
			_putchar("\n");
			break;
		}
		else
		{
			_putchar("%d, ", n);
		}
	}
}
