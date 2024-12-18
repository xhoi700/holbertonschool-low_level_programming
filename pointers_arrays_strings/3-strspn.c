#include "main.h"

/**
*  _strspn - gets the count off reference
* @s: points to the string
* @accept: reference string
* Return: (count)
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				found = 1;
				break;
			}
		}
		if (found == 0)
			break;
	}
	return (count);
}
