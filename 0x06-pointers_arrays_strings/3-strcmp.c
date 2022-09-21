#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp - a function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: return zero if s1 is equl to s2,negative if s1<s2,positiveif s1>s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	diff = 0;


	while (i)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		else if (s1[i] == '\0')
		{
			diff = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			diff = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			diff = s1[i] = s2[i];
			break;
		}
		else
			i++;
	}
	return (diff);
}
