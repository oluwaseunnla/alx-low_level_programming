#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * return: 0 (success)
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

void print_alphabet_x10(void)
{
	i = 0;

	while (i < 10)
	{
		print_alphabet();
	}
}	
