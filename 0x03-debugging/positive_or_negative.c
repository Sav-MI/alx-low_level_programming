#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 0;

	if (i > 0)
		printf("%d is positive\n", i);
	else if (i  == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);

	return (0);
}
