#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: Always (0)
 */

void print_alphabet_x10(void)
{
	int a = 0;

	while (a < 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		a++;
		putchar('\n');
	}
}

