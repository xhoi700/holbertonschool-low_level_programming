#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
	return (NULL);
	}

	if (array == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
