#include "main.h"

/**
 * factorial - factorial of a given number
 * @n: int n
 *
 * Return: int factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	else
		return (n * factorial(n - 1));
}
