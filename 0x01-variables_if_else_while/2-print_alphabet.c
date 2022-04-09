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
	clrscr();

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar('\n');
		
		getchar();
	}

	return (0);
}
