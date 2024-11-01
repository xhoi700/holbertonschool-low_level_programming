#include "main.h"

/**
 *_strncpy - hibjkn
 *@dest: holds value for input
 *@src: holds value for input
 *@n: holds value for input
 *Return: (ptr)
 */

 char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
