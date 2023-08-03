#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number
 * @i: the index of the bit we want.
 * Return: the value of the bit at the index.
 */
int get_bit(unsigned long int n, unsigned int i)
{
	if (i >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> i) & 1);
}
