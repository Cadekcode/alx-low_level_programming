#include "main.h"

/**
 * _islower - print the case sensitivity of a char.
 * 
 * Return: 1 is lowercase amd 0 is otherwise.
 */

int _islower(int c)
{
	char c;
	if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);
}
