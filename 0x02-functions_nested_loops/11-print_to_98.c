#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_to_98 - prints the integer from 0 to 98
 * @n: starting number
 *
 * Return void
 *
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("%d\n", 98);
}
