#include "main.h"

/**
 * print_numbers - print numbers from 1 - 9.
 * Copyright - Adedeji
 *
 * Return: 0 for success.
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
