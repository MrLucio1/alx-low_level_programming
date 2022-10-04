#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - to concaternate two strings
 * @s1: first string to concatenate
 * @s2: second string to be concatenated
 *
 * Return: pointer to string created (Success)
 * NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *n1;
	unsigned int i = 0, j = 0, num1 = 0, num2 = 0;

	while (s1 && s1[num1])
		num1++;
	while (s2 && s2[num2])
		num2++;
	n1 = malloc(sizeof(char) * (num1 + num2 + 1));
	if (n1 == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < num1)
		{
			n1[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (num1 + num2))
		{
			n1[i] = s2[i];
			i++;
			j++;
		}
	}
	n1[i] = '\0';
	return (n1);
}
