#include "main.h"

/*
 *  _strlen -  calculates the length of a string.
 *
 * @s: the string to be checked
 *
 * return: the result of the function
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
