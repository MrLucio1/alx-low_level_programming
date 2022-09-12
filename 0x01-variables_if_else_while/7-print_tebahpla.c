#include <stdio.h>
/**
 * main - program that prints the lowercase in the reverse.
 * You can only use the putchar function
 * Return: 0
 */
int main(void)
{
	char mine;

	for (mine = 'z'; mine >= 'a'; mine--)
	{
		putchar(mine);
	}
	putchar('\n');
	return (0);
}
