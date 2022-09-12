#include <stdio.h>
/**
 * main - program that prints the numbers from 01 to 89
 * Numbers must be separated by , followed by a space
 * Numbers should be printed in ascending order with 2 digits
 * You can only usethe putchar function
 * Return: 0
 */
int main(void)
{
	int num1, num2;

	for (num1 = 48; num1 <= 56; num1++)
	{
		for (num2 = 49; num2 <= 57; num2++)
		{
			if (num2 > num1)
			{
				putchar(num1);
				putchar(num2);
				if (num1 != 56 || num2 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
