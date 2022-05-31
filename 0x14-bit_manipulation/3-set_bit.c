#include "main.h"

/**
 * set_bit - set the value of the bit
 * @n: a pointer to the bit
 * @index: the index to set the value
 *
 * Return: if an error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
