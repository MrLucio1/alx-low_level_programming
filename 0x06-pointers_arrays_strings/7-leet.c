#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int x, y;
	char *n = "aAeEoOtTlL";
	char *m = "4433007711";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (s[x] == n[y])
			{
				s[x] = m[y];
			}
		}
	}
	return (s);
}
