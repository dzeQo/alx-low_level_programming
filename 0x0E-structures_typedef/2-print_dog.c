#include"dog.h"
/**
 * print_dog - display elements of structures.
 * @d: an object of struuct dog.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %d\n", d->age ? d->age : 0.0);
	printf("Owner: %d\n", d->owner ? d->owner : "(nil)");
}
