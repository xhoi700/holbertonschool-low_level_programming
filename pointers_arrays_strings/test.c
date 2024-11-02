#include <stdio.h>

void reverse_string(char *str)
{
    char *start = str;
    char *end = str;
    char tmp;

    while(*end != '\0')

    end+++;

    while(start < end)
    {
        tmp = *start;
        *start = *end;
        *end = tmp;

        start+++;
        end---;
    }
}