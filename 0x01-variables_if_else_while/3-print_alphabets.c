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
	char c = 'a';

while (c <= 'z')
{
	putchar(c);
	c++;
}
	c = 'A';

while (c <= 'Z')
{
	putchar(c);
	c++;
}
	putchar('\n');
	return (0);
}
