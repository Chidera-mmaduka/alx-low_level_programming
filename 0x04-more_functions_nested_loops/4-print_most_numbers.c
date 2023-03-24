#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_most_numbers - print numbers from 0 - 9 except 2 && 4
 *
 * Return: always 0 (succes)
 */
void print_most_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
		if (a == 2 || a == 4)
		{
			a++;
			continue;
		}
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
