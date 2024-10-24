#include "main.h"

/*
* print_isalpha - sxvgfg
*/
int _isalpha(int c)
{
	if ((97 <= c && 122 >= c) || (65 <= c && 90 >= c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
