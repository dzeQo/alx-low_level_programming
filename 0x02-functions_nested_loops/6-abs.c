#include<stdio.h>
#include "main.h"

/**
 * abs - return 1 if the character is a lowercase, and 0 otherwise.
 * @n: the number to be checked
 * Return: Always 0.
 */

int abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
