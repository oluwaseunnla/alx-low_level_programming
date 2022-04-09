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
	putchar("\n");
	return (0);
}
