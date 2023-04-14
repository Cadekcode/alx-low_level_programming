#include "main.h"

/**
 * malloc_checked - function to allocate memory.
 *
 * @b: allocated memory.
 *
 * Return: return the pointer.
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);

}
