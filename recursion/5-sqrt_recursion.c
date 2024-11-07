#include "main.h"
/*
*_sqrt_primary - primary recursive function
*@n: number to check
*@r: the root number
Return: Return: -1 for not sqr root if it is have root natural
*/
int _sqrt_primary(int n, int r)
{
	if (r * r == n)
	{
		return (r);
	}
	if (r * r > n)
	{
		return (-1);
	}
	return (_sqrt_primary(n, r + 1));
}
int _sqrt_recursion(int n)
{
	return (_sqrt_primary(n, 0));
}
