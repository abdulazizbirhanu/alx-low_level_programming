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
	int n = 0;


while (n <= 99)
{
	int m = 0;

	while (m <= 99)
	{
		if (n < m && n != m)
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			putchar(' ');
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			if (n < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		m++;
	}
	n++;
}
	putchar('\n');
	return (0);
}
