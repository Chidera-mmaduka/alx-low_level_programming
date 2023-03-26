#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_line - prints out _ to the stdo
 * @n: the number of underscores to  print
 *
 * Return: always 0
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
