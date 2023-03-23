#include <stdio.h>

#define N 4000000
/**
 * main - entry point of the program
 *
 * Return: always (0)
 */
int main(void)
{
	int sum = 0;
	int a = 1, b = 2, c;

	while (b <= N)
	{
		if (b % 2 == 0)
		{
			sum += b;
		}
		c = a + b;
		a = b;
		b = c;
	}
	printf("%d\n", sum);
	return (0);
}
