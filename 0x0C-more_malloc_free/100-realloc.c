#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memoryblock.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: size, in bytes, of the allocatedspace of ptr.
 * @new_size: new size, in bytes, of the new memoryblock
 *
 * Return: ptr.
 * if new_size == old_size, returns ptr without chandes.
 * if malloc fails, returns NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	ptr = malloc(new_size);
	if (new_size == old_size)
	return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
