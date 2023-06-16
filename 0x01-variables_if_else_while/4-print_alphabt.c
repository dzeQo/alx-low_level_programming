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
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
