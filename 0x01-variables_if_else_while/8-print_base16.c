#include <stdio.h>

/**
 * main - prints all the numbersof base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char ch;
  /**/
	for (n = 48; n < 68; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\');
	return (0);
}
