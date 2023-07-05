#include "main.h"

/**
 * _pow_recursion - return the value of x raised by power of y
 *
 * @x: the first number
 * @y: the second number
 *
 * return: the result of teh recursion function
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
