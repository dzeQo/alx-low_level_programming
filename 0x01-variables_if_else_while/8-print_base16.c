#include <stdio.h>
/**
 * main - prints the sign of the number
 *
 * Return: 0
*/
int main() {
	int num;

	for (num = 0; num < 16; num++) {
		if (num < 10) {
			putchar('0' + num);
		} else {
			putchar('a' + num - 10);
		}
	}

	putchar('\n');  // Print a new line after the numbers
	return 0;
}

