#include "main.h"

/**
 * main - Entry point
 *
 * return: 0 (success)
 */

int main(void)
{
	void print_alphabet(void)
	{
		int ch;
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
	print_alphabet();

	return (0);
}
