#include "main.h"
#include <stdio.h>

/**
 * *string_toupper -  lowercase letters of a string to uppercase
 *
 * Return: nothing.
 */

char *string_toupper(char *)
{
int *ptr;

while (*ptr != '\0')
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr = *ptr - 32;
}
ptr++;
}
return (str);
}
