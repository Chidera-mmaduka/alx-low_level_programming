#include <stdio.h>
#include <stdlib.h>
/**
 * main -entry point of program
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int A;
	/**
	 * while: this fucntion is used to loop the program till a condition is met
	 *
	 * putchar is used to print a single char to the std output
	 *
	 */
	for (A = 'a'; A <= 'z'; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}
