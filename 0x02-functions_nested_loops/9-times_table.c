#include "main.h"
/**
 * times_table - prints time table from 0-9
 * Return: None
 */
void times_table(void)
{
	int i, j, r;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = (i * j);
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (r >= 10)
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			else if (r < 10 && j != 0)
			{
				_putchar(' ');
				_putchar((r % 10) + 0);
			}
			else
				_putchar((r % 10) + '0');
		}
		_putchar('\n');
	}
}
