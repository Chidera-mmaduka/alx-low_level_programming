#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - entry point of the function
 *
 * Return: always 0
 *
 */
int main(void)
{
	int i, sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
