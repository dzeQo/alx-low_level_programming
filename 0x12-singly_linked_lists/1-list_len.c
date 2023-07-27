#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the first node.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	char *str;
	unsigned int len;
	size_t count = 0;

	while (h)
	{
		len = h->len;
		str = h->str;
		if (str)
		{
			printf("[%u] %s\n", len, str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		count++;
	}
	return (count);
}

