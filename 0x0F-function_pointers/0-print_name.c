#include "function_pointers.h"
/**
 * print_name - function prints the name.
 * @name: ptr to str that has name.
 * @f: function pointer.
 */
void print_name(char *name, void(*f)(char *))
{
	if (name && f)
		f(name);
}
