#include "main.h"
/**
 *factorial -the factorial of a given number.
 *@n: asdasx
 *Return: 0 or -1
 */
int factorial(int n)
{
{
	if (n < 0)
		return (-1);
	else if (n > 0)
		return (n * factorial(n - 1));
	else
		return (1);
}
}
