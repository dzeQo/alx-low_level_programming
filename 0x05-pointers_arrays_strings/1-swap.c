#include "main.h"

/**
 * swap_int - swap the value of two  integers .
 *
 * @a: the first number
 * @b: the second number
 * 
 * Return: 0 success .
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
