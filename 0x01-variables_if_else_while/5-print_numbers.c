#include <stdio.h>
#include <stdlib.h>
/**
 * main -entry point of the program
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int n;

	/**
	 * for: this function is used to loop the program
	 *
	 * printf: this is used to print output to std output
	 *
	 */
	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
