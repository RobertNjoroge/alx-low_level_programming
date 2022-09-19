#include <stdio.h>
#include "main.h"
/**
 * _puts -  prints a string, followed by a new line
 * @str: string
 *
 * Description: prints a string
 * On success: return no error
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
