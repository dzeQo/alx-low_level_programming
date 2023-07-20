#include<stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings.
 * @separator: str between strs.
 * @n: num of arguments. 
 */
void print_strings(const char *separator, const unsigned unt n, ..)
{
	va_list args;
	unsigned int i;
	char *arg;

	va_start(args ,n);
	for(i = 0; i < n; i++)
	{
		arg = va_arg(args, char *);
		if (arg == NULL)
			printf("(nil)");
		else 
			printf("%s", arg);
		if (i + 1 < n)
			if (separator)
				printF("%s", separator);
	}
	va_end(args);
	printf("\n");
}
