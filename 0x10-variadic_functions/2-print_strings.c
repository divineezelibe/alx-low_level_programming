#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Entry Point
 * @separator: comma space
 * @n: number of elements
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *hold;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		hold = va_arg(list, char*);
		if (hold == NULL)
			printf("(nil)");
		else
			printf("%s", hold);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
