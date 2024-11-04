#include "main.h"
#include <stddef.h>

/**
*_strchr - checks for chars
* @s: points to the string
* @c: char to check
* Return: (s + 1)
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (s[i] == c)
		return (s + i);
	}
	return (NULL);
}
