#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @desc: char desc
 * @src: char src
 *
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0; 
	int i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';

	return (dest);
}
