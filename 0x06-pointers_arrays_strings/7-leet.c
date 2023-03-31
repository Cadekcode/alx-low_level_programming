#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: pointer to the encoded string
 */

char *leet(char *s)
{
	int i, j;
	char map[] = "aAeEoOtTlL";
	char code[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; map[j] != '\0'; j++)
	{
	if (s[i] == map[j])
	{
	s[i] = code[j];
	}
	}
	}

	return (s);
}

