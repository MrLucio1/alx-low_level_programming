#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assign a random number to the variation n anytime it is executed
 * number stored in variable n
 * Return: 0
 */
int main(void)
{
	int n;
	
	sran(time(0));
	n=rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, n % 10);
	if (n % 10 > 5)
		printf("and is greater than 5\n");
	else if (n % 10 == 0)
		printf("and is 0\n");
	else if (n % 10 < 5)
		printf("and is less than 6 and not 0\n");
	return (0);
}
