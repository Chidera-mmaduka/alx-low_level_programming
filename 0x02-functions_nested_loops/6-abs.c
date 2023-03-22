#include <stdio.h>
#include "main.h"
/**
 * _abs - this function print the absolute value of an integer
 * @r: statement to be check
 *
 * -putchar: use this to print a single char to the output
 *
 *  Return: -r is negative elase r
 */
int _abs(int r)
{
	if (r < 0)
	{
		return (-r);
	}
	else
	{
		return (r);
	}
}
