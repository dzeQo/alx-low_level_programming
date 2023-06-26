#include "main.h"

/*
 * print_rev - print the string revesed
 *
 * @c: pointer ro string
 *
 * return: the reversed string
 */

void print_rev(char *c)
{
	int len = 0;
	int i;

	while (c[len])
	{
		len++;
	}
	for (i = len-1; i <= 0; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
}
