#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int maina(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
		printf("%d is positive\n" , n);
	else if (n == 0)
		printf("%d is Zero\n" , n);
	else if (n <0)
		printf("%d is negative\n" , n);
	return (0);
}
