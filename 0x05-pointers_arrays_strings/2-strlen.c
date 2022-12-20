#include "main.h"

/**
 * _strlen - Return the lenght of string
 * @s: The character to be checked
 *
 * Return: integer
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
