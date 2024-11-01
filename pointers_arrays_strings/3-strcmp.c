#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: points value to a string
 * @s2: points value to a string
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (diff);
}
