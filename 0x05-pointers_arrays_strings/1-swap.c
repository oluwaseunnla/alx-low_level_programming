#include "main.h"

/**
 * swap_int - Entry point
 * @a: first parameter\
 * @b: second parameter
 */

void swap_int(int *a, int *b)
{
	int tem = *a;
	*a = *b;
	*b = tem;
}
