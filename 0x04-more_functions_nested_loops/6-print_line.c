#include "main.h"

/**
 * print_line - Checks for uppercase characters
 * @n: Integer n
 * Author: Divine Ezelibe
 * Return: void
 */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
