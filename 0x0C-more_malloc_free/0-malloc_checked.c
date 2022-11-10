#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory.
 * @b: amount of bytes.
 *
 * Return: Always nothing
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}