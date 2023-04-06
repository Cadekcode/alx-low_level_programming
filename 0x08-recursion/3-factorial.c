#include "main.h"

/**
 * factorial - function to print s factorial.
 * @n: number to be printed.
 *
 * Return: 1 is succesful
 */

int factorial(int n)
{
	int u;

	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		u = n * factorial(n - 1);
	}

	return (u);
}
