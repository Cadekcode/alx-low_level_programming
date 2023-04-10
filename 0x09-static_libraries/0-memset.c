#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @n: this is the byte of the memory to be pointed by @s.
 * @s: this is with the constant byte @b.
 * @b: the memory area pointed to.
 * Return: to return @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c = 0;

	while (c < n)
	{
		s[c] = b;
		c++;
	}

	return (s);
}
