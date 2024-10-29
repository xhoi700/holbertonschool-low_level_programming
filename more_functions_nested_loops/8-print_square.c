#include "main.h"

/**
 * print_square - function print square
 * @size: - parameter from input until when print #
 * main.h header file
 * Return: Void
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0 )
	print_square('\n');
	{
		for (i = 0; i < size; i++)
		{
			for (j =  0; j < size; i++)
			_putchar('#');
		_putchar('\n');
		}
	}
}
