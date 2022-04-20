#include "main.h"
#include <stdio.h>

/**
 * point_array - Entry
 * @a: first argument
 * @n: second argument
 */

void print_arrary(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%p", *a[i]);

		if (i != n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
