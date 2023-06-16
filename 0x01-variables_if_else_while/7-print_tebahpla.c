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
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
