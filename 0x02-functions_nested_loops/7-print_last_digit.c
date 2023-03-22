#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints the last digit of the value in the integer
 *@r: statement to be check
 *
 * Return: last digit
 *
 */
int print_last_digit(int r)
{
	int last_digit;

	if (r < 0)
		r = -r;
	last_digit = abs(r % 10);
	_putchar(last_digit + '0');
	return (last_digit);
}
