#include "main.h"

/**
 * put_half - Entry
 * @str: only parameter
 */

void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		int half;

		for (half = i / 2; half <= i; half++)
		{
			_putchar(str[half]);
		}
		_putchar('\n');
	}
	else
	{
		int n;

		for (n = (i - 1) / 2; n <= i; n++)
		{
			_putchar(str[n]);
		}
		_putchar('\n');
	}
}
