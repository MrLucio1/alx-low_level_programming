#include "main.h"
#include <stdlib.h>

/**
* *create_array - creates an array of chars
* then initialize it with a specific char
* @size: the size of the array to create
* @c: the char to initialize the array c
*
* Return: pointer to the array (success) and NULL (Error)
*/
char *create_array(unsigned int size, char c);
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	p = (char *) malloc(size * sizeof(char));
	if (p == NULL)
		return (0);
	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	*(p + i) = '\0';
	return (p);
}
