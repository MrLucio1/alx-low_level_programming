#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to first value
 * @b: pointer to second value
 * Return: no value
*/
void swap_int(int *a, int *b)
{
	int f = *a;
	*a = *b;
	*b = f;
}
