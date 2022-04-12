#include "main.h"

/**
 *print_last_digit - gets the last figure form an array
 *@n: is the int that will use for the function
 *Return: 0 or 1
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
