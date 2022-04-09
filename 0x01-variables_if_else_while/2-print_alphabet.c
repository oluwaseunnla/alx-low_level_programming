#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 *
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		getchar();
	}

	return (0);
}
