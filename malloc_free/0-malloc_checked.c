#include"main.h"
#include<stdlib.h>

/**
 * create_array -entry point,creates array of chars
 * @size: -holds value for output
 * @c: -holds value for output
 * Return: (array)
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	exit(98);

	return (ptr);


}
