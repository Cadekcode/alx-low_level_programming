#include "main.h"

/**
 * print_to_98 - function that print from n to 98.
 *
 * Return: 0 is successful.
 */

void print_to_98(int n)
{
	int n;
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n". n);
}
