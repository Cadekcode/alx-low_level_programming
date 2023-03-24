#include "main.h"

/**
 * print_line - print lines n number of times.
 * @n: number of times.
 *
 * Return: 0
 */

void print_line(int n)
{
	int i;

	for (i = '0'; i < n; i++)
	{
	putchar('_');
	}
	putchar('\n');
}
