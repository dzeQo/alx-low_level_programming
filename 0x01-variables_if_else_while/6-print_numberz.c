#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the sign of the number
 *
 * Return: 0
 */
int main(void)
{
	int nbr = 0;

	while (nbr < 10)
	{
		putchar(nbr + '0');
		nbr++;
	}
	putchar('\n');
	return (0);
}
