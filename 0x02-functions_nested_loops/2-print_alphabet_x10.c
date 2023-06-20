#include<stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase 10 times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int a = 0;

	while (a < 10)
	{
		int alp = 'a';

		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
		a++;
	}
}
