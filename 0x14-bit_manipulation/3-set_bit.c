#include "main.h"

/**
 * set_bit - set the value of the given bit to 1 at the given index.
 * @n: ptr to the int
 * @i: the index starting from 0.
 * Return: 1 or -1.
 */
int sit_bit(unsigned long int *n, unsigned int i)
{
	if (!n || i >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= (1UL << i);
	return (1);
}
