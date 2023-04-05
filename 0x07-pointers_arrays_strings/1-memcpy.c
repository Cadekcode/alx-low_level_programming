#include "main.h"

/**
 * _memcpy - function that that copies memory area.
 *
 * @n: the byte to be copied.
 * @dest: memory to be coppied into.
 * @src: the byte from @n to be copied from.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int s;

	while (s < n)
	{
		dest[s] = src[s];
		s++;
	}

	return (dest);
}
