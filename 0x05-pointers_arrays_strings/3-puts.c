#include "main.h"

/**
 * _puts - display a string.
 *
 * @str: string to be displayed
 *
 **/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
