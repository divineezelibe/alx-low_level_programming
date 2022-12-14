#include "main.h"

/**
 * int _abs - Computes the absolute value of an integer
 * @ab: int parameter
 *
 * Return: Always 0
 */

int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
