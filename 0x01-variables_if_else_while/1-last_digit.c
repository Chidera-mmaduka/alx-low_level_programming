#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point of the program
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/**
	 * If: the if statement checks and analyze the condition
	 *
	 * printf: this fuction is used to print output to the stdo
	 *
	 */
	ld = n % 10;

	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	return (0);
}
