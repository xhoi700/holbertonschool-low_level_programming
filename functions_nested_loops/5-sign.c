#include "main.h"

/*
* print_sign - sxvgfg
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (n == 0)
	{
		_putchar('=');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);

	}
}
