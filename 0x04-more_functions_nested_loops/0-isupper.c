#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _isupper - use to cehck if a char is an uppercase char
 * @c: char to be check
 *
 * Return: 1 if char is uppercase else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
