#include "main.h"

/**
 * *_memcpy - Copy Memore area
 * @dest: Char destination
 * @n: Int number of bytes
 * @src: area to copy
 *
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
