#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the progra's descriptions'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("%d is %s\n", n, "positive");
}
else
{
	printf("%d is %s\n", n, "negative");
}
	return (0);
}
