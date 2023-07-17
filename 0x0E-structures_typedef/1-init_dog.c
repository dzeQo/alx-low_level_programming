#include "dog.h"
/**
 * init_dog - initilise a dog.
 * @d: element ofstructure.
 * @name: character to nname 
 * @age: the age of dog
 * @owner: the owner of the dog.
 *
 * Return: thhe value of the function.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d =  malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return d
{
