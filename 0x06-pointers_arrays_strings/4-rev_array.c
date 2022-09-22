#include  "main.h"
/**
 * reverse_array - reverse the content of an array of integers
 * @a: array to be reversred
 * @n: number of elements of the array.
 * Return: no return
 */
void reverse_array(int *a, int n)
{
	int x, y, tmp;

	y = n - 1;

	for (x = 0; x < n / 2; x++)
	{
		tmp = a[x];
		a[x] = a[y];
		a[y--] = tmp;
	}
}
