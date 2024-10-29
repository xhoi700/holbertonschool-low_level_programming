#include "main.h"
/**
 * print_line - draws a straight line
 * main.h header file
 * Return:0
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
	}
}
