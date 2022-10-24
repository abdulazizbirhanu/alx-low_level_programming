#include "main.h"
#include <stdio.h>

/**
 * swap_int - Entry point
 * @a: a pointer dereference
 * @b: a pointer dereference
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
