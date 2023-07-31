#include "lists.h"
/**
 * free_listint -  frees a listint_t list.
 * @head: pointer to the first node.
*/
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *ptr;

	while (current)
	{
		ptr = current;
		current = current->next;
		free(ptr);
	}
	head = NULL;
}
