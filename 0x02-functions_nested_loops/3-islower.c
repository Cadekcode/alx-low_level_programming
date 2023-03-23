#include "main.h"

/**
 * _islower - print the uppercase and lowercase.
 * char: character.
 * @c: char
 * Return: 1 is lowercase and 0 is otherwise.
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	return (0);
}
