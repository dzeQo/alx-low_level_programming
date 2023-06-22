#include "main.h"
/**
 * more_numbers - function that prints the numbers, from 0 to 9
 * Return: void
 */
void more_numbers(void)
{
	int i, n;

	n = 0;

	while (i < 10)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
		n++;
	}
	_putchar('\n');
}
