#include "main.h"

/**
 * _strlen - Entry point
 * @s: parameter
 * Return: lenth of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
