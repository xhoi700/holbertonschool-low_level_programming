#include "main.h"
#include <stdio.h>

/**
* _isupper - function to check ascii
*@c: input value
* Return: 0 or 1
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
		return (0);
}
