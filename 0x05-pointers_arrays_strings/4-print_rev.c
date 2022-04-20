#include "main.h"

/**
 * print_rev - entry point
 * @s: first parameter
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	int max = i;

	for (max; max >= 0; max--)
	{
		_putchar(s[max]);
	}
	_putchar('\n');
}
