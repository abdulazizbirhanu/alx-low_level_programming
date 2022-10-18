#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: 'the program's descriptions'
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int c = 97;

	while (c <= 122)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
