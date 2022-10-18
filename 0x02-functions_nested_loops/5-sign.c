#include "main.h"

/**
 * print_sign - Entry point
 * @n: the number to be checked
 *
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
	if (n == 45)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 47)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
