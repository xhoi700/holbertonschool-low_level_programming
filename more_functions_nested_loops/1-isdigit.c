#include "main.h"
#include <stdio.h>
/**
* _isdigit - check if input is a digit
*@c: input value
* Return: 1 or 0
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
