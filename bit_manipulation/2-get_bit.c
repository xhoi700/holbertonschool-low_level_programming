#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number
 * @index: position of number
 * Return: the value of the bit at index of -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit = -1, size = (sizeof(n) * 8);

	if (index > size)
		return (-1);
	if (n > 0)
		bit = (n >> index) & 1;
	return bit;
}
