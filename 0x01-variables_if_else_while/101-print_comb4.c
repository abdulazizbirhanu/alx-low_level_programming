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

while (n <= 9)
{
	int m = 0;

	while (m <= 9)
	{
		int o = 0;

		while (o <= 9)
		{
			if (n < m && m < o && n != m && n != o && m != o)
			{
				putchar((n % 10) + '0');
				putchar((m % 10) + '0');
				putchar((o % 10) + '0');
				if (n < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
			o++;
		}
		m++;
	}
	n++;
}
	putchar('\n');
	return (0);
}
