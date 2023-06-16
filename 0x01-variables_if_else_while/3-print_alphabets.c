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
char alUp = 'A';

while (alphabet <= 'z')
{
	putchar(alphabet);
	alphabet++;
}
while (alUp <= 'Z')
{
        putchar(alUp);
	alUp++;
}
putchar('\n');
return (0);
}
