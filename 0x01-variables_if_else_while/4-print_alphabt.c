#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q')
		{
			continue;
		}
		else if (i == 'e')
		{
			continue;
		}
		else
		{
			putchar(i);
		}
	}	
	putchar('\n');

	return (0);
}
