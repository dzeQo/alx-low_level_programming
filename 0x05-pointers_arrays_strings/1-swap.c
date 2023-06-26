#include "main.h"

/**
 * swap_int - swap the value of two  integers .
 *
 * @a: the first number
 * @b: the second number
 * @c: temporary var
 * Return: 0 success .
 */
void swap_int(int *a, int *b)
{
	int c;

	*c = *a;
	*a = *b;
	*b = *c;
}
