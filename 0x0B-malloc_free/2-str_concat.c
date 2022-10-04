#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - to concaternate two strings
 * @s1: first string to concatenate
 * @s2: second string to be concatenated
 *
 * Return: pointer to the new string created (Success), NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *n1;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	n1 = malloc((len1 + len2 + 1) * sizeof(char));
	if (n1 == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < len1)
		{
			n1[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (len1 + len2))
		{
			n1[i] = s2[i];
			i++;
			j++;
		}
	}
	n1[i] = '\0';
	return (n1);
}
