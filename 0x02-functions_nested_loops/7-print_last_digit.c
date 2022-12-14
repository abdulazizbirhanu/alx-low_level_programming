#include "main.h"

/**
 * print_last_digit -  computes the absolute value of an integer.
 * @n: number to be checked.
 *
 * Return: Always integer
 *
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = (-1 * (n % 10));
		_putchar(n + '0');
		return (n);
	}
	else
	{
		n = (n % 10);
		_putchar(n + '0');
		return (n);
	}
}
