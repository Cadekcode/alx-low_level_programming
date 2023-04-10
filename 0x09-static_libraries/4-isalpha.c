#include "main.h"

/**
 * _isalpha - print letter, lowercase or uppercase.
 * @c: char to printed
 * Return: 1 if successful and 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	return (0);
}
