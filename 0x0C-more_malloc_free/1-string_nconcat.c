#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - func to concaternate a sting to another in byte
 * @n: qty of bytes to conatenate to from s2 to  s1
 * @s1: the string to append to
 * @s2: the string to concatenate from
 *
 * Return: pointer to the newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s1;
	unsigned int a = 0,  b = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len])
		len2++;
	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!s)
		return (NULL);
	while (i < len1)
	{
		s[i] s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		s[i++] = s2[j++];
	while (n >= len2 && i < (len1 + len2))
		s[i++] = s2[j++];

	s[i] = '\0';
	return (s);
}
