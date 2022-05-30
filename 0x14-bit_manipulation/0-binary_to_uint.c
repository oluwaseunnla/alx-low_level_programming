#include "main.h"
#include <stdlib.h>

/**
 * _strlen - return the length of a string
 * @str: a const pointer to the sting
 *
 * Return: the string length
 */

unsigned int _strlen(char const *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _pow - return the power of a number
 * @a: the number to be raised
 * @b: the exponent
 *
 * Return: the power of a number
 */
unsigned int _pow(unsigned int a, unsigned int b)
{
	unsigned int i, pow = 1;

	if (b == 0)
		return (1);

	for (i = 0; i < b; i++)
		pow *= a;

	return (pow);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to a string
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, len, sum, basePwr;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	len = _strlen(b);
	sum = 0;
	for (i = 0, j = len; i < len; i++, j--)
	{
		basePwr = _pow(2, j - 1);
		sum += (((b[i]) - '0') * basePwr);
	}
	return (sum);
}
