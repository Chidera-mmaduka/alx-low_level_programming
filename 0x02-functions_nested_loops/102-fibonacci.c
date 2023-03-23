#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define N 50
/**
 * main - entry point of the program
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
	int i;
	unsigned long int fib[N];

	fib[0] = 1;
	fib[1] = 2;

	for (i = 2; i < N; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	for (i = 0; i < N; i++)
	{
		printf("%lu", fib[i]);
		if (i < N - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
