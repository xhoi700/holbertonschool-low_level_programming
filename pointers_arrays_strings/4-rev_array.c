#include "main.h"
#include <stdio.h>

/**
 *reverse_array - content of an array of integers.
 *@a: an array of integers
 *@n: the number of elements to swap
 */

void reverse_array(int *a, int n)
{
int i, tmp;

for (i = 0; i < n / 2; i++)
{
	tmp = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = tmp;
}
}
