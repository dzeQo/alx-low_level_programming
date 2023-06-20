#include<stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * print_alphabet - print letters in lowercase
 * Return: Always 0.
 */
int main(void)
{
	void print_alphabet(void)
	{
		int alph = 'a';

		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
	}
	_putchar('\n');
	return (0);
}
