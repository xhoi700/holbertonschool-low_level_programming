#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * This function is the entry point for the program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{ 
    int i;
    for (i = 0; i < 10; i++);
    {
        putchar(i +'0');
    }
    putchar('\n');
    return (0);
}