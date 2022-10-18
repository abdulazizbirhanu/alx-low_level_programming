#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: 'the program's descriptions'
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int n = 0;
	int c = 97;

	while (n < 10)
	{

	while (c <= 122)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	}
}
