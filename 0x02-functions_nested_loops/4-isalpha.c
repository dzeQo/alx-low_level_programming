#include<stdio.h>
#include "main.h"

/**
 * _islower - return 1 if the character is a lowercase or uppercase, and 0 otherwise.
 * @c: the number to be checked
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z' && c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
