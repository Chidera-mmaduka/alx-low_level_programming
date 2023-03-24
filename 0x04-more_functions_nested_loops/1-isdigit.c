#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _isdigit - thos function checks if the char is a digit
 * @c: where char to be check is stored
 *
 * Return: return 1 is c is digit else 0
 */
int _isdigit(int c)
{
	if (c >= 48 &&  c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
