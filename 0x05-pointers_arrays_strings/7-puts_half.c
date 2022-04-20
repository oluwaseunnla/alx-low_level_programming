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
		int half = i / 2;

		for (half; half <= i; half++)
		{
			_putchar(i[half]);
		}
		_putchar('\n');
	}
	else
	{
		int n = (i - 1) / 2;

		for (n; n <= i; n++)
		{
			_putchar(i[n]);
		}
		_putchar('\n');
	}
}
