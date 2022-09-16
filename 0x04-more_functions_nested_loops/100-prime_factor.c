#include <stdio.h>

/**
 * main - prints the largest prime factor
 *
 * Return: returns 0
 */

int main(void)
{
	long number = 612852475143;
	int r;

	while (r++ < number / 2)
	{
		if (number % r == 0)
		{
			number /= 2;
			continue;
		}

		for (r = 3; r < number / 2; r++)
		{
			if (number % r == 0)
				number /= r;
		}
	}
}
