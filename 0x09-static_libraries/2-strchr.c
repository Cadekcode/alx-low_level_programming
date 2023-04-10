#include "main.h"

/**
 * _strchr - locating  a character in aset of  string.
 *
 * @c: this is the occurrence of the character to be located.
 *
 * @s: is the string
 *
 * Return: a pointer to the first occurrence of the character is successful.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
	if (*s != c)
	s++;
		else
	return (s);
	}
	if (c == '\0')

	return (s);
		else
	return (NULL);
}
