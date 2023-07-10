#include "main.h"
/**
 * create_array - unction that creates an array of chars,
 *  and initializes it with a specific char.
 * @size: num of elements in the array.
 * @c: char.
 * Return: arr or NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
	}
	return (array);
}
