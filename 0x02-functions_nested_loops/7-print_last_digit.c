#include<stdio.h>
#include "main.h"

/**
 * print_last_digit - print the  last digits of a number
 *
 * @n: an integer number
 *
 * Return: the lase digit
 */
int print_last_digit(int n)
{
	int m = n % 10;

	if (n < 0)
	{
		m *= -1;
	}
	_putchar(m + '0');
	return (m);
}
