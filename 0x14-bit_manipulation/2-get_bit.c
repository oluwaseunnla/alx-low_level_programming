#include "main.h"

/**
 * get_bit - get the value of a bit
 * @n: The bit
 * @index: The index to the get the value
 *
 * Return: If an error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
