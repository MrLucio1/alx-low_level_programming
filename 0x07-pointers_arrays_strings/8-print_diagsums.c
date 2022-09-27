#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int n;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (n = 0; n < size; n++)
	{
		sum += a[(size * n) + n];
		sum1 += a[(size * (n + 1)) - (n + 1)];
	}
	printf("%d, %d\n", sum, sum1);
}
