#include "main.h"

/**
 * _strlen_recursion - prints the length of the string.
 *
 * @s: strings
 *
 * Return: i length of string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)

	{
	i++;
	i += _strlen_recursion(s + 1);
	}
	return (i);
}
