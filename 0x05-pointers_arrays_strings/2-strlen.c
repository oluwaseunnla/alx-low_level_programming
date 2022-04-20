#include "main.h"

/**
 * _strlen - Entry point
 * @s: parameter
 * Retur: lenth of string
 */

int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
