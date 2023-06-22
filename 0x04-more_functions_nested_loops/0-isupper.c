#include<stdio.h>
#include "main.h"

/*
 * _isupper - checks if the given character is uppercase or lowercase.
 *
 *@c: the character to be checked .
 *
 * return: the result of the function
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
