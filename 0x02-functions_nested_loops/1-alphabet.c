#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line
 *
 * Description:
 *     This function uses _putchar to print each letter of the alphabet from
 *     'a' to 'z', followed by a newline character.
 *
 * Return: returns the value of the program
 *
 */
void print_alphabet(void)
{
	/**
	 * char: use to declare the variable a
	 *
	 * While: use to loop th programm in it
	 *
	 * _putchar: use to print a single char to the stdo
	 *
	 */
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
