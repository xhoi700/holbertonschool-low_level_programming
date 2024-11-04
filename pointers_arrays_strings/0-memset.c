#include "main.h"

/**
* _memset - filles memory with byte
@s: prints the memory
@b: char to put
@n: number of times
* Return (s)
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
