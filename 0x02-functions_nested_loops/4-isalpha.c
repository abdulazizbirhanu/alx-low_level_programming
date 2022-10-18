#include "main.h"

/**
 * _isalpha - Entry point
 * @c: the charactr to be checked
 *
 * Return: Always 0 (Success)
 */

int _isalpha(char c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90) ||
	(c >= 48 && c <= 58))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
