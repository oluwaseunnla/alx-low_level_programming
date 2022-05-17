#include <unistd.h>

/**
 * _putchar - writes the charater c to stdout
 * @c: The character to print
 *
 * Return: on sucess
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
