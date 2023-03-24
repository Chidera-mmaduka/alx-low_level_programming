#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_numbers - print integer from 0 - 9
 *
 * _putchar: prints a single char
 *
 * Return: always 0 (success)
 */
void print_numbers(void)
{
	int a = 48;

	while (a < 58)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
