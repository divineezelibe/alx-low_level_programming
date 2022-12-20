#include "main.h"

/**
 * swap_int - Swap values of the provided integers
 * @a: integer a
 * @b: Integer b
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
