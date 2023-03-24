#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * more_numbers - this function prints number 1-14 10 times
 *
 * Return: always 0 (success)
 */
void more_numbers(void)
{
	int a;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a < 15; a++)
		{
			if (a >= 10)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
	_putchar('\n');
	}
}
