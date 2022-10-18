#include "main.h"

/**
 * _islower - Entry point
 * @c: the charactr to be checked
 *
 * Return: Always 0 (Success)
 */

int _islower(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
