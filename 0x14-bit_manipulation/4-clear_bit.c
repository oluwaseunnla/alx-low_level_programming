#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index
 * @n: A pointer to the bit
 * @index: the index to the set value
 *
 * Return: if an error occurs -1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
