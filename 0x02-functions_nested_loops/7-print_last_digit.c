#include "main.h"

/**
 * print_last_digit - print the last digit of an integer.
 *
 * Returns: the value of the interger.
 */

int print_last_digit(int)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}