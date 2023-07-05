#include "main.h"

/**
 * _puts_recursion - a recursive function the return a string
 *
 * @s: the string to be checked
 *
 * return: to return the result
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s+1);
}
