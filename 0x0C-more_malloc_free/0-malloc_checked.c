#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked -this func allocates memory using malloc
 * @b: number of bytes to be allocated
 *
 * Return: must be a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
