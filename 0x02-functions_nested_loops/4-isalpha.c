#include "main.h"
/**
 * _isalpha - checks whether a character is an alphabet letter
 * @c: the character to check
 *
 * Return: 1 if c is a any aplhabet letter else 0
 *
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
		return (0);
}
